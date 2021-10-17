#include <stdio.h>
#include "./list.h"
#include <time.h>
#define f64 double

int main(void) {
    clock_t start_init = clock();
    list_t list = create_list_t(6000);
    clock_t finish_init = clock();
    clock_t start_add = clock();
        
    for (long i = 0; i < 5000; i++) {
        push_to_list_t(&list, (void *) i);
    }
    push_to_list_t(&list, "lol");

    clock_t finish_add = clock();
    clock_t start_get = clock();
    
    printf("%s\n", (char*) get_data(list, "lol"));


    clock_t finish_get = clock();


    f64 init = (f64)(finish_init - start_init) / CLOCKS_PER_SEC;
    f64 add = (f64)(finish_add - start_add) / CLOCKS_PER_SEC;
    f64 get = (f64)(finish_get - start_get) / CLOCKS_PER_SEC;

    printf("| init: %f, add: %f, get: %f | sum : %f \n", init, add, get, init + add + get);
}
