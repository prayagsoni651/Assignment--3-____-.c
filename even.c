
/// 4.	Write a program to check whether a given number is an even number or an odd number without using % operator.

#include<stdio.h>
int main()
{

    int number;

    printf("Enter any number ");
    scanf("%d",&number);

    if(number % 2== 0)
    {
        printf("Given number is even ");
    }
    else{
        printf("Given number is odd number ");
    }
    return 0;
}
