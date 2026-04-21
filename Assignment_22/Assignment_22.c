#include <stdio.h>
#include <string.h>

void main()
{
    char str1[100], str2[100], str1cpy[200];
    int choice, len, i;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    printf("\nString Operations Menu:\n");
    printf("1. Length of string\n");
    printf("2. Copy string\n");
    printf("3. Concatenate strings\n");
    printf("4. Compare strings\n");
    printf("5. Reverse string\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Length of first string = %d\n", (int)strlen(str1));
        printf("Length of second string = %d\n", (int)strlen(str2));
        break;
    case 2:
        strcpy(str1cpy, str1);
        printf("Copied string: %s\n", str1cpy);
        break;
    case 3:
        strcpy(str1cpy, str1);
        strcat(str1cpy, str2);
        printf("Concatenated string: %s\n", str1cpy);
        break;
    case 4:
        if (strcmp(str1, str2) == 0)
            printf("Strings are equal\n");
        else
            printf("Strings are not equal\n");
        break;
    case 5:
        len = strlen(str1);
        for (i = 0; i < len / 2; i++)
        {
            char temp = str1[i];
            str1[i] = str1[len - 1 - i];
            str1[len - 1 - i] = temp;
        }
        printf("Reversed string: %s\n", str1);
        break;
    default:
        printf("Wrong choice\n");
    }
}
