#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main(int argc, char* argv[])
{
    if (argc != 2) {
        fprintf(stderr, "usage: ./words <filename>\n");
        exit(EXIT_FAILURE);
    }

    char* filename = argv[1];
    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        fprintf(stderr, "Error unable to open file %s\n", filename);
        exit(EXIT_FAILURE);
    }

    bool in_word = false;
    int ch, num_words = 0;
    while ((ch = getc(fp)) != EOF) {
        if (isspace(ch)) {
            in_word = false;
        } else if (!in_word) {
            in_word = true;
            num_words++;
        }
    }

    printf("There are %d words in %s\n", num_words, filename);

    fclose(fp);
    return 0;
}
