int check(int x, int y, int n);
int day_of_year(int day, int month, int year);
int digit(int n, int k);

int main(void)
{
    return 0;
}

int check(int x, int y, int n)
{
    return (x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1);
}

int day_of_year(int day, int month, int year)
{
    int num_days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int day_count = 0, i;

    for (i = 1; i < month; i++) {
        day_count += num_days[i - 1];
    }

    // adjust for leap years
    if (year % 4 == 0 && month > 2) {
        day_count++;
    }

    return day_count + day;
}

int digit(int n, int k)
{
    for (int i = 1; i < k; i++) {
        n /= 10;
    }

    return n % 10;
}
