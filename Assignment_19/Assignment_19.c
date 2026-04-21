#include <stdio.h>
#include <string.h>

struct Employee
{
    char name[50];
    char designation[50];
    char gender[10];
    char date_of_joining[20];
    float salary;
};

void main()
{
    int n, i, male_count = 0, female_count = 0;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct Employee emp[50];
    for (i = 0; i < n; i++)
    {
        printf("\nEmployee %d details:\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Designation: ");
        scanf("%s", emp[i].designation);
        printf("Gender (Male/Female): ");
        scanf("%s", emp[i].gender);
        printf("Date of Joining (dd-mm-yyyy): ");
        scanf("%s", emp[i].date_of_joining);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }
    printf("\nTotal number of employees = %d\n", n);
    for (i = 0; i < n; i++)
    {
        if (strcmp(emp[i].gender, "Male") == 0)
            male_count++;
        else
            female_count++;
    }
    printf("Male employees = %d\n", male_count);
    printf("Female employees = %d\n", female_count);
    printf("Employees with salary more than 10000:");
    for (i = 0; i < n; i++)
        if (emp[i].salary > 10000)
            printf(" %s", emp[i].name);
    printf("\n");
    printf("Employees with designation AsstManager:");
    for (i = 0; i < n; i++)
        if (strcmp(emp[i].designation, "AsstManager") == 0)
            printf(" %s", emp[i].name);
    printf("\n");
}
