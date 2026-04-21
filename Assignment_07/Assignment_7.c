#include <stdio.h>
struct Student
{
    char name[50];
    int roll_no;
    float marks[3];
};
void main()
{
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    struct Student students[num_students];
    int i;
    float total;
    for (i = 0; i < num_students; i++)
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        for (int j = 0; j < 3; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }
    }
    printf("\nStudent Details:\n");
    for (i = 0; i < num_students; i++)
    {
        total = students[i].marks[0] + students[i].marks[1] + students[i].marks[2];
        printf("| Name: %s | Roll No: %d | Total Marks: %.2f | Percentage: %.2f%% |\n", students[i].name, students[i].roll_no, total, (total / 3.0));
    }
}