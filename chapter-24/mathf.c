#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <errno.h>

#define TRY_MATH_FCN(f, arg) \
    try_math_fcn(f, arg, "Error in call of " #f)

double try_math_fcn(double (*f)(double), double arg, const char* err_msg);

int main(void)
{
    printf("%lf\n", try_math_fcn(sqrt, 4, "Error in call of sqrt"));
    printf("%lf\n", TRY_MATH_FCN(sqrt, -4));
    return 0;
}

double try_math_fcn(double (*f)(double), double arg, const char* err_msg)
{
    errno = 0;

    double result = f(arg);
    if (errno != 0) {
        perror(err_msg);
        exit(EXIT_FAILURE);
    }

    return result;
}
