/* Copies a file */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    FILE *source_fp, *dest_fp;
    int ch;

    if (argc != 3) {
        fprintf(stderr, "usage: fcopy source dest\n");
        exit(EXIT_FAILURE);
    }

    // We open in "rb" and "wb" so we can do both text and binary files
    // because in the latter's case we need to just look at bytes and not
    // interpret them as we would text files
    if ((source_fp = fopen(argv[1], "rb")) == NULL) {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if ((dest_fp = fopen(argv[2], "wb")) == NULL) {
        fprintf(stderr, "Can't open %s\n", argv[2]);
        fclose(source_fp);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(source_fp)) != EOF) {
        putc(ch, dest_fp);
    }

    fclose(source_fp);
    fclose(dest_fp);
    return 0;
}
