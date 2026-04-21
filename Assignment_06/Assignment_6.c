#include <stdio.h>
int fact(int n)
{
    if (n == 1)
        return n;
    else
        return n * fact(n - 1);
}
void main()
{
    int ch, num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("\n1. Recursive Factorial");
    printf("\n2. Non Recursive Factorial");
    printf("\nEnter Your Choice: \n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 2:
    {
        int fac = 1;
        for (int i = num; i > 0; i--)
            fac = fac * i;
        printf("Factorial: %d", fac);
        break;
    }
    case 1:
    {
        printf("Factorial: %d", fact(num));
        break;
    }
    default:
        printf("Wrong Choice!!");
    }
}