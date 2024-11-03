#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if (argc != 2) {
        fprintf(stderr, "usage: ./lines <filename>\n");
        exit(EXIT_FAILURE);
    }

    char* filename = argv[1];
    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        fprintf(stderr, "Error unable to open file %s\n", filename);
        exit(EXIT_FAILURE);
    }

    int ch, num_lines = 0;
    while ((ch = getc(fp)) != EOF) {
        if (ch == '\n') {
            num_lines++;
        }
    }

    printf("There are %d lines in %s\n", num_lines, filename);

    fclose(fp);
    return 0;
}
