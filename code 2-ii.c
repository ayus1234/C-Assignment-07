//Program to check whether a given number is divisible by 5 or not

#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    if(num%5)
        printf("Number is not divisible by 5");
    else
        printf("Number is divisible by 5");
    getch();
}