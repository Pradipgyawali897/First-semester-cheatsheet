//1.Write a Program(WAP) in C to input a character from the user and display the entered
   //character using the concept of getchar() and putchar()
# include<stdio.h>
int main()
{
    char a;
    printf("Enter a character");
    a=getchar();
    printf("the entered character is:");
    putchar(a);
    return 0;

}