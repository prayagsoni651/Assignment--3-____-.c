/// 8.	Write a program to check whether a given year is a leap year or not.

#include<stdio.h>
int main()
{

    int year;

    printf("Enter any year");
    scanf("%d" ,&year);

    if((year % 4 == 0 && year%100 != 0 )|| (year % 400 == 0))
    {
        printf(" %d Given year is leap year ",year);
    }
    else if(year %100 == 0)
    {
        printf("%d Given year is not a leap year" , year);
    }
    return 0;
}
