#include <stdio.h>
#include <stdlib.h>

void fail(char *msg);


int main() {
    FILE *fptr;

    fptr = fopen("./logs/log.log", "a");
    if(fptr == NULL)
        fail("Failed to create file ./logs/log.log");
    fprintf(fptr, "Hello World!\n");
    fclose(fptr);

    fptr = fopen("./logs/log.log", "r");
    if(fptr == NULL)
        fail("Failed to open file ./logs/log.log");
    
    char line[1000];
    while (fgets(line, sizeof(line), fptr) != NULL){
        printf("%s", line);
    }
    fclose(fptr);

    return 0;
}


void fail(char *msg) {
    printf("%s\n", msg);
    exit(1);
}