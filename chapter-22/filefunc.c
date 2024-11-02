#include <stdio.h>

char* fget_string(char* s, int n, FILE* stream)
{
    int ch, len = 0;

    while (len < n - 1) {
        if ((ch = getc(stream)) == EOF) {
            if (len == 0 || ferror(stream))
                return NULL;
            break;
        }
        s[len++] = ch;
        if (ch == '\n')
            break;
    }

    s[len] = '\0';
    return s;
}

int fput_string(const char* s, FILE* stream)
{
    while (*s != '\0') {
        if (putc(*s, stream) == EOF)
            return EOF;
        s++;
    }

    return 0;
}

int main(void)
{
    return 0;
}
