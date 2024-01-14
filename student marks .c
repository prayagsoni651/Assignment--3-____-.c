///11.	Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.

#include<stdio.h>
int main()
{
    int marks;

    printf("Enter Your Marks  ");
    scanf("%d" , &marks);

    if(marks <= 100 && marks >= 75)
    {
        printf("A grade");
    }
    else if(marks <= 75 && marks >= 60)
    {
        printf("B Grade");
    }
    else if(marks <= 60 && marks>= 33)
    {
        printf("C  Grade");
    }
    else{
        printf("You are failed");
    }
}
