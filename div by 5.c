/// 2.	Write a program to check whether a given number is divisible by 5 or not

#include<stdio.h>
int main()
{

    int number;

    printf("Enter Any number ");
    scanf("%d",&number);

    if(number % 5 == 0 )
    {
        printf("Given NUmber is divisible by 5");
    }
    else{
        printf("Given NUmber is not divisible by 5");
    }
}
