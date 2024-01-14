/// 13.	Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>
int main()
{

    int num;

    printf("Enter any number ");
    scanf("%d", &num);

    if(num%3 == 0)
    {
        printf("given number is divisible by 3");
    }
    else if(num%2 == 0)
    {
        printf("Given number is divisible by 2");
    }
    else{
        printf("Given number is not divisible by 3 and 2 ");
    }
}
