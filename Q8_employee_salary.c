#include <stdio.h>

int main()
{
    float basicSalary, allowance, bonus;
    float finalSalary;

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    printf("Enter allowance: ");
    scanf("%f", &allowance);

    printf("Enter bonus: ");
    scanf("%f", &bonus);

    finalSalary = basicSalary + allowance + bonus;

    printf("\n----- Salary Details -----\n");
    printf("Basic Salary: %.2f\n", basicSalary);
    printf("Allowance: %.2f\n", allowance);
    printf("Bonus: %.2f\n", bonus);
    printf("Final Salary: %.2f\n", finalSalary);

    return 0;
}