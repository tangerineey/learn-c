#include <stdio.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
    char* filename = argv[1];

    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    int ch;
    while ((ch = getc(fp)) != EOF) {
        if (isalpha(ch)) {
            // Note that you could just print the return value
            // of toupper :)
            printf("%c", toupper(ch));
        } else {
            printf("%c", ch);
        }
    }

    fclose(fp);
    return 0;
}
