#include<stdio.h>

int main() {
    FILE *filePointer;

    filePointer = fopen("example.txt","w");
    if (filePointer == NULL) {
        printf("Unable to open file");
    }
    fprintf(filePointer, "Hello creating file!");
    fclose(filePointer);
    printf("File created successffully.\n");

    return 0;

}