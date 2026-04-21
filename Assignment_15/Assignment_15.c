#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    int n;
    printf("Enter how many random numbers you want: ");
    scanf("%d", &n);
    printf("Pseudo random numbers with srand():\n");
    srand((unsigned int)time(NULL));
    for (int i = 0; i < n; i++)
        printf("%d\n", rand());
}