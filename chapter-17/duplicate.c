#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* duplicate(const char* s)
{
    char* new_string;

    new_string = malloc(strlen(s) + 1);
    if (new_string == NULL) {
        return NULL;
    }

    strcpy(new_string, s);

    return new_string;
}

int main(void)
{
    const char str[] = "Hello, World!";
    printf("Original string: %s\n", str);
    printf("Copied string: %s\n", duplicate(str));
    return 0;
}
