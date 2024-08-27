#include <stdio.h>

void censor(char str[])
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'f' && str[i + 1] == 'o' && str[i + 2] == 'o') {
            str[i] = str[i + 1] = str[i + 2] = 'x';
        }
    }
}

int main(void)
{
    char string[] = "food fools foo bar";
    censor(string);
    printf("%s\n", string);
    return 0;
}
