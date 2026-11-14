#include <stdio.h>

int main()
{
    int num1, num2;
    int quotient, remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num2 != 0)
    {
        quotient = num1 / num2;
        remainder = num1 % num2;

        printf("Quotient = %d\n", quotient);
        printf("Remainder = %d\n", remainder);
    }
    else
    {
        printf("Division by zero is not possible.\n");
    }

    return 0;
}