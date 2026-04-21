#include <stdio.h>
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int t = n, r, sum = 0;
    while (t > 0)
    {
        sum = sum * 10 + t % 10;
        t /= 10;
    }
    printf("Reversed number: %d\n", sum);
}