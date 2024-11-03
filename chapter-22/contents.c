#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
    int i, n, offset;
    unsigned char buffer[10];

    if (argc != 2) {
        fprintf(stderr, "usage: ./contents <filename>\n");
        exit(EXIT_FAILURE);
    }

    char* filename = argv[1];
    FILE* fp = fopen(filename, "rb");
    if (fp == NULL) {
        fprintf(stderr, "Error unable to open file %s\n", filename);
        exit(EXIT_FAILURE);
    }

    printf("Offset              Bytes              Characters\n");
    printf("------  -----------------------------  ----------\n");

    for (offset = 0;; offset += 10) {
        // fread returns between [0, 10]
        n = fread(buffer, sizeof(char), 10, fp);
        // if n is 0 we had an error or EOF
        if (n == 0) {
            break;
        }

        // We print only what we read
        printf("%6d  ", offset);
        for (i = 0; i < n; i++) {
            printf("%.2X ", buffer[i]);
        }

        // if the amount we read (i) is less than what we should (10 chars)
        // we need to pad with spaces
        for (; i < 10; i++) {
            printf("   ");
        }

        // to get to the characters column
        printf(" ");

        // we print results from the buffer
        // with nonprintable stuff being "."
        for (i = 0; i < n; i++) {
            if (!isprint(buffer[i])) {
                buffer[i] = '.';
            }

            printf("%c", buffer[i]);
        }
        printf("\n");
    }

    fclose(fp);
    return 0;
}
