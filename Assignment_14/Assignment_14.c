#include <stdio.h>
#include <math.h>
void main()
{
    int binary, dec = 0, n = 0;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    int arr[10];
    while (binary != 0)
    {
        arr[n] = binary % 10;
        binary /= 10;
        n++;
    }
    for (int i = 0; i < n; i++)
        dec += (pow(2, i) * arr[i]);
    printf("Decimal equivalent: %d\n", dec);
}