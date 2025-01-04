#include <stdio.h>
#include <stdarg.h>

int max_int(int n, ...)
{
    va_list ap;

    int i, current, largest;

    va_start(ap, n);
    largest = va_arg(ap, int);

    for (i = 1; i < n; i++) {
        current = va_arg(ap, int);

        if (current > largest) {
            largest = current;
        }
    }

    va_end(ap);
    return largest;
}

int errorf(const char* format, ...)
{
    static int num_errors = 0;

    int n;
    va_list ap;

    num_errors++;
    fprintf(stderr, "** Error %d: ", num_errors);

    va_start(ap, format);
    n = vfprintf(stderr, format, ap);
    va_end(ap);

    fprintf(stderr, "\n");
    return n;
}

int main(void)
{
    return 0;
}
