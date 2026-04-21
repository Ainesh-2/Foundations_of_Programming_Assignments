#include <stdio.h>

void main()
{
    int n, i;
    int arr[100], even[100], odd[100];
    int even_count = 0, odd_count = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter integers: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even[even_count++] = arr[i];
        else
            odd[odd_count++] = arr[i];
    }
    printf("Even numbers are:");
    for (i = 0; i < even_count; i++)
        printf(" %d", even[i]);
    printf("\n");
    printf("Odd numbers are:");
    for (i = 0; i < odd_count; i++)
        printf(" %d", odd[i]);
    printf("\n");
}
