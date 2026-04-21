#include <stdio.h>
#include <stdbool.h>

void main()
{
    int marks[5], i, total = 0;
    bool passed = true;
    float percentage;
    printf("Enter marks of 5 subjects: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
        total += marks[i];
        if (marks[i] < 40)
            passed = false;
    }
    percentage = total / 5.0;
    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);
    if (!passed)
        printf("Result: FAIL\n");
    else
    {
        printf("Result: PASS\n");
        if (percentage >= 75)
            printf("Grade: Distinction\n");
        else if (percentage >= 60)
            printf("Grade: First Division\n");
        else if (percentage >= 50)
            printf("Grade: Second Division\n");
        else
            printf("Grade: Third Division\n");
    }
}
