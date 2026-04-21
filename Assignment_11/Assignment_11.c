#include <stdio.h>
#include <math.h>
void main()
{
    int number, choice, i, is_prime, temp;
    long long fact;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Menu:\n");
    printf("1. Square Root\n");
    printf("2. Square\n");
    printf("3. Cube\n");
    printf("4. Check Prime\n");
    printf("5. Factorial\n");
    printf("6. Prime Factors\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Square Root = %.4f\n", sqrt((double)number));
        break;
    case 2:
        printf("Square = %d\n", number * number);
        break;
    case 3:
        printf("Cube = %d\n", number * number * number);
        break;
    case 4:
        is_prime = 1;
        if (number <= 1)
            is_prime = 0;
        for (i = 2; i <= number / 2; i++)
        {
            if (number % i == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
            printf("%d is a Prime number\n", number);
        else
            printf("%d is not a Prime number\n", number);
        break;
    case 5:
        fact = 1;
        for (i = 1; i <= number; i++)
            fact *= i;
        printf("Factorial = %lld\n", fact);
        break;
    case 6:
        printf("Prime Factors of %d: ", number);
        temp = number;
        for (i = 2; i <= temp; i++)
        {
            while (temp % i == 0)
            {
                printf("%d ", i);
                temp /= i;
            }
        }
        printf("\n");
        break;
    default:
        printf("Invalid choice\n");
    }
}
