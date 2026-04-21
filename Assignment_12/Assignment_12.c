#include <stdio.h>

void main()
{
    int num1, num2, i, smallest_divisor = 0;
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    for (i = 2; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            smallest_divisor = i;
            break;
        }
    }
    if (smallest_divisor != 0)
        printf("Smallest Common Divisor: %d\n", smallest_divisor);
    else
        printf("No common divisor other than 1\n");
    a = num1;
    b = num2;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("Greatest Common Divisor (GCD): %d\n", a);
}
