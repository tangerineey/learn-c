#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    char* filename = argv[1];
    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        fprintf(stderr, "Error unable to open %s\n", filename);
        exit(EXIT_FAILURE);
    }

    int num_chars = 0;
    while (getc(fp) != EOF) {
        num_chars++;
    }

    printf("Number of characters: %d\n", num_chars);

    fclose(fp);
    return 0;
}
