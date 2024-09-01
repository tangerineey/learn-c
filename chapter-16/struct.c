typedef struct {
    double real, imaginary;
} complex;

complex make_complex(double x, double y)
{
    return (complex) { x, y };
}

complex add_complex(complex x, complex y)
{
    complex z;
    z.real = x.real + y.real;
    z.imaginary = x.imaginary + y.imaginary;
    return z;
}

int main(void)
{
    complex c1, c2, c3;
    return 0;
}
