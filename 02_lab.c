//WAP in C to input a string from the user and display the entered string using the concept
//of gets() and puts().
#include <stdio.h>

int main() {
    char str[100]; // Declare a character array to store the string

    // Prompt the user to enter a string
    printf("Enter a string: ");
    gets(str); // Use gets() to take input (not recommended in modern C)

    // Display the entered string
    printf("You entered: ");
    puts(str); // Use puts() to display the string

    return 0;
}
