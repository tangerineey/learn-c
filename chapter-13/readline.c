#include <ctype.h>
#include <stdio.h>

#define PHRASE_LIMIT 50

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n') {
        if (i == 0 && isspace(ch)) {
            ; // ignore starting whitespace
        } else if (i < n) {
            str[i++] = ch;
        }
    }
    str[i] = '\0';

    return i;
}

int main(void)
{
    char phrase[PHRASE_LIMIT];

    printf("Enter a phrase %d letters long: ", PHRASE_LIMIT);
    read_line(phrase, PHRASE_LIMIT);

    printf("You entered: ");
    puts(phrase);

    return 0;
}
