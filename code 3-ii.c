//Program to check whether a given number is even or odd

#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    if(num%2)
        printf("Number is Odd");
    else
        printf("Number is Even");
    getch();
}