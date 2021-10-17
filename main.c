#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char * content;
    long long length;
} file_t;

file_t le_load_file(const char * path) {
    FILE * f = fopen(path, "r");
        
    file_t file_final;

    if (f) {
        fseek(f, 0, SEEK_END);
        long long length = ftell(f);

        char * buffer = (char *) malloc(length * sizeof(char *));
        rewind(f);
        fread(buffer, sizeof(char), length, f);
        buffer[length] = '\0';
        fclose(f);

        file_final.content = buffer;
        file_final.length = length;
        free(buffer);

        return file_final;
    }

    else {
        return (file_t){0};
    }
}



int main(void) {
    file_t file = le_load_file("./map.tx"); 
    printf("%s", file.content);


    return 0;

}
