#include "printer3D.h"

void set(char ** buffer, char * reference);

void incrementa(int * who, int value) {
    * who = value + (int) * who;
}

int main(int argc, char * args[]) {
    FILE * file;
    file = fopen(args[1], "r");

    if(file != NULL) {
        char ** buffer = (char **) malloc(sizeof(char **) * 10);
        char * vec1 = "solid exported";
        char * vec2 = "facet normal";

        set(buffer, vec1);
        set(buffer + 1, vec2);

        printf("\nBUFFER: %s", * buffer);
        printf("\nBUFFER: %s", * (buffer + 1));
        
        int _close = fclose(file);
        if(_close != 0)
            printf("\nCLOSE: %d", _close);
    } else {
        printf("ARQUIVO N EXISTE");
    }

    return 0;
}

void set(char ** buffer, char * reference) {
    // * who = value + (int) * who;
    * buffer = reference;
    // * buffer = "HELLO, WORLD";
}