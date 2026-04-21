#include <stdio.h>

void main()
{
    float basic_pay, hra, ta, gross_salary, professional_tax, net_salary;

    printf("Enter basic pay: ");
    scanf("%f", &basic_pay);

    hra = 0.10 * basic_pay;
    ta = 0.05 * basic_pay;
    gross_salary = basic_pay + hra + ta;
    professional_tax = 0.02 * gross_salary;
    net_salary = gross_salary - professional_tax;

    printf("HRA (10%%): %.2f\n", hra);
    printf("TA (5%%): %.2f\n", ta);
    printf("Gross Salary: %.2f\n", gross_salary);
    printf("Professional Tax (2%%): %.2f\n", professional_tax);
    printf("Net Salary: %.2f\n", net_salary);
}
