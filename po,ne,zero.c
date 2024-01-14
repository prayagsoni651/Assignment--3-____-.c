/// 15.	Write a program to check whether a given number is positive, negative or zero

#include<stdio.h>
int main()
{

    int number;

    printf("Enter Any Number");
    scanf("%d",&number);

    if(number == 0)
    {
        printf("Given number is 0");
    }
    else if(number > 0)
    {

        printf("Given number is positive number ");
    }
    else{
        printf("Given number is negative number ");
    }
    return 0;
}
