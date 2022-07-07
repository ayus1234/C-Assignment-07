//Program to check whether a given number is positive or non positive

#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    if(num>0)
         printf("Number is Positive");
    if(num<=0)
         printf("Number is Non Positive");
    getch();
}