/// 14.	Write a program to check whether a given number is divisible by 7 or divisible by 3

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
    else if(num%7 == 0)
    {
        printf("Given number is divisible by 7");
    }
    else{
        printf("Given number is not divisible by 3 and 7 ");
    }
}
