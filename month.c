/// 18.	Write a program which takes the month number as an input and display number of days in that month

#include<stdio.h>
int main()
{

    int month;

    printf("Enter Month Number ");
    scanf("%d",&month);

    if(month == 1)
    {
        printf("January");
        printf("31 Days ");
    }
    else if(month == 2)
    {
        printf("Feburary");
        printf("28 or 29 Days");
    }
    else if(month == 3)
    {
        printf("March");
        printf("31 Days");
    }
    else if(month == 4)
    {
        printf("April");
        printf("30 Days");
    }
    else if(month == 5)
    {
        printf("May");
        printf("31 Days");
    }
    else if(month == 6)
    {
        printf("June");
        printf("30 Days");
    }
    else if(month == 7)
    {
        printf("Julay");
        printf("31 Days");
    }
    else if(month == 8)
    {
        printf("August");
        printf("31 Days");
    }
    else if(month == 9)
    {
        printf("September");
        printf("30 Days");
    }
    else if(month == 10)
    {
        printf("October");
        printf("31 Days");
    }
    else if(month == 11)
    {
        printf("November");
        printf("30 Days");
    }
    else if(month == 12)
    {
        printf("December");
        printf("31 Days");
    }
    else{
        printf("Invalid ! Input Please Enter Valid Month Number ");
    }
    return 0;
}
