/// 5.	Write a program to check whether a given number is a three-digit number or not.

#include<stdio.h>
int main()
{

    int num;

    printf("Enter any number ");
    scanf("%d",&num);

    if(num >= 100 && num <= 999)
    {
        printf("Given number is three digit number ");
    }
    else
    {
        printf("Given number is not a three digit number ");
    }
    return 0;

}
