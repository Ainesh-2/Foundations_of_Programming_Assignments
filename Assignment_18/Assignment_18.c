#include <stdio.h>
#include <string.h>

void main()
{
    char str1[100], str2[100], reversed[100];
    int len, i, is_palindrome = 1;
    printf("Enter a string: ");
    scanf("%s", str1);
    printf("Enter another string for equality check: ");
    scanf("%s", str2);
    len = strlen(str1);
    printf("Length of string = %d\n", len);
    for (i = 0; i < len; i++)
        reversed[i] = str1[len - 1 - i];
    reversed[len] = '\0';
    printf("Reversed string = %s\n", reversed);
    for (i = 0; i < len / 2; i++)
    {
        if (str1[i] != str1[len - 1 - i])
        {
            is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome)
        printf("The string is a Palindrome\n");
    else
        printf("The string is not a Palindrome\n");
    if (strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");
    if (strstr(str1, str2) != NULL)
        printf("Substring found in main string\n");
    else
        printf("Substring not found in main string\n");
}
