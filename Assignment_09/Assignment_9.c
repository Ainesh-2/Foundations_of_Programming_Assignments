#include <stdio.h>
#include <math.h>
void main()
{
    int num, temp, d = 0, sum = 0;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        temp /= 10;
        d++;
    }
    temp = num;
    for (int i = 0; i < d; i++)
    {
        sum = sum * 10 + (int)pow((temp % 10), d);
        temp /= 10;
    }
    if (sum == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
}
