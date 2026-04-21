#include <stdio.h>
#include <math.h>
int fact(int n)
{
    if (n == 1)
        return n;
    else
        return n * fact(n - 1);
}
void main()
{
    float a, b;
    char ch;
    printf("Enter Two Numbers: \n");
    scanf("%f", &a);
    scanf("%f", &b);
    printf("What Operation You want to Perform: \n");
    printf("+\n");
    printf("-\n");
    printf("*\n");
    printf("/\n");
    printf("%%\n");
    printf("!\n");
    printf("^\n");
    printf("Enter Your Choice: ");
    scanf(" %c", &ch);
    switch (ch)
    {
    case '+':
        printf("Addition: %f", a + b);
        break;
    case '-':
        printf("Subtraction: %f", a - b);
        break;
    case '*':
        printf("Multiplication: %f", a * b);
        break;
    case '/':
        printf("Division: %f", a / b);
        break;
    case '%':
        printf("Modulus: %d", (int)a % (int)b);
        break;
    case '!':
        printf("Factorial of First Number: %d", fact(a));
        printf("\nFactorial of Second Number: %d", fact(b));
        break;
    case '^':
        printf("Power: %f", pow(a, b));
        break;
    default:
        printf("Wrong Choice!!");
    }
}