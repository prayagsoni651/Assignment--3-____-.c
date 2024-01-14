
/// 6.	Write a program to print greater between two numbers. Print one number of both are the same.

#include<stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("Number 1 is greater than other numbers.\n");
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("Number 2 is greater than other numbers.\n");
    }
    else if (num3 > num1 && num3 > num2)
    {
        printf("Number 3 is greater than other numbers.\n");
    }
    else
    {
        printf("All numbers are the same.\n");
    }

    return 0;
}
