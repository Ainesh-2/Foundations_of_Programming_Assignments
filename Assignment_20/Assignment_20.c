#include <stdio.h>

void swapWithoutPointers(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("Inside function (without pointers): a = %d b = %d\n", a, b);
}
void swapWithPointers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Before swapping: a = %d b = %d\n", x, y);
    swapWithoutPointers(x, y);
    printf("After swapping without pointers: a = %d b = %d\n", x, y);
    swapWithPointers(&x, &y);
    printf("After swapping with pointers: x = %d y = %d\n", x, y);
}
