/// 16.	Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character

#include<stdio.h>
int main()
{

    char chr;

    printf("Enter any special character , number , alphabet ");
    scanf("%c",&chr);

    if(chr >= '0' && chr <= '9')
    {
        printf("Given Data Is a Number ");
    }
    else if(chr >= 'a' && chr <= 'z')
    {
        printf("Given data Is a  Lowercase Character ");
    }
    else if(chr >= 'A' && chr <= 'Z')
    {
        printf("Given Data Is Uppercase Character ");
    }
    else{
        printf("Give Data Is Special Character ");
    }
    return 0;

}
