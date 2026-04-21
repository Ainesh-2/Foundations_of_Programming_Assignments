#include <stdio.h>

void main()
{
    double x, term, sum;
    int n, i, j;
    printf("Enter value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter number of terms: ");
    scanf("%d", &n);
    sum = 0;
    term = x;
    for (i = 0; i < n; i++)
    {
        if (i > 0)
            term = term * (-1) * x * x / ((2 * i) * (2 * i + 1));
        sum += term;
    }
    printf("Sum of sine series = %lf\n", sum);
}
