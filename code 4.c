//Program to check whether a given number is even or odd without using the modulus operator

#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter any Number\n");
    scanf("%d",&num);
    if(num&1)
        printf("Number is Odd");
    else
        printf("Number is Even");
    getch();
}