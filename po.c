/// 1.	Write a program to check whether a given number is positive or non-positive.

#include<stdio.h>
int main()
{
    int number = 2;

    if(number > 0)
    {
        printf("Given Number is positive number ");
    }
    else if(number == 0 )
    {
        printf("Given number is non-positive number");
    }
return 0;
}
