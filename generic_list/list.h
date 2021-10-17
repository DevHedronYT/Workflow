#ifndef _generic_list_c
    #define _generic_list_c
    
    #include <stdlib.h>

    #define func static inline

    typedef struct {
        void ** data;
        int len;
        int idx;
    } list_t;

    func list_t create_list_t(unsigned int capacity) {
        list_t list;
        list.data = (void**) calloc(capacity, sizeof(void*)); 
        list.len = capacity;
        list.idx = 0;
        return list;
    } 

    func void push_to_list_t(list_t * list, void * data) {
        if (list -> idx + 1 > list -> len) {                                                                   
            list -> data = (void**) realloc(list -> data, list -> len + 10);        
            list -> len += 10;                                                
        }                                                                    
        list -> data[list -> idx] = data;                               
        list -> idx++;        


    }

    func void remove_at_list_t(list_t * list, int index) {
        while (index + 1 < list -> len) {                                                                    
            list -> data[index] = list -> data[index + 1];                 
        }         
    }

    func void free_list_t(list_t * list) {
        for (int i = 0; i < list -> len - 1; i++) {
            free(list -> data[i]);
        } 
        free(list -> data);
    }

    #define get_at_list_t(list, index) \
        list.data[index]

    int _get_data(list_t * list, void * find) {
        for (int i = 0; i < list -> len - 1; i++) {
            if (list -> data[i] == find) {
                return i;
            }
        }

        return 0x0;
    }

    #define get_data(list, data) \
        get_at_list_t(list, _get_data(&list, (void *)data))

                          
#endif

