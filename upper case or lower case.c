
/// 12.	Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>

int main()
{
    char alphabet;

    // Input from the user
    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);

    // Check if the entered character is an alphabet
    if ((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z'))
    {
        // Check if the alphabet is in lowercase
        if (alphabet >= 'a' && alphabet <= 'z')
        {
            printf("%c is in lowercase.\n", alphabet);
        }
        // Check if the alphabet is in uppercase
        else if (alphabet >= 'A' && alphabet <= 'Z')
        {
            printf("%c is in uppercase.\n", alphabet);
        }
    }
    else
    {
        printf("Invalid input. Please enter an alphabet.\n");
    }

    return 0;
}
