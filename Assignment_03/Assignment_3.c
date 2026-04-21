#include <stdio.h>

void main()
{
    int number, i;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Multiplication Table of %d:\n", number);
    for (i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", number, i, number * i);
}
