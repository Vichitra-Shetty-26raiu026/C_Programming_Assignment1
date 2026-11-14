
#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5;
    int totalMarks;
    float percentage;

    printf("Enter marks in five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    totalMarks = m1 + m2 + m3 + m4 + m5;

    percentage = (totalMarks / 500.0) * 100;

    printf("\nTotal Marks = %d / 500\n", totalMarks);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}