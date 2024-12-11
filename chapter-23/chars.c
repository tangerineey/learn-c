#include <stdio.h>
#include <string.h>

int numchars(const char* s, char ch)
{
    int times_seen = 0;

    while ((s = strchr(s, ch)) != NULL) {
        times_seen++;
        s++;
    }

    return times_seen;
}

int main(void)
{
    char ch;
    char input_str[100];

    printf("Enter a string: ");
    fgets(input_str, sizeof(input_str), stdin);

    printf("Enter a char: ");
    scanf("%c", &ch);

    printf("Times %c is seen: %d\n", ch, numchars(input_str, ch));

    return 0;
}
