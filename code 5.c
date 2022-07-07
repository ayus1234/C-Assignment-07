//Program to check whether a given number is a three digit number or not

#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter any Number\n");
    scanf("%d",&num);
    if(num>=100 && num<=999)
        printf("A three digit number");
    else
        printf("Not a three digit number");
    getch();
}