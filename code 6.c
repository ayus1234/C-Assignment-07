//Program to find greater between two numbers. Print one number if both numbers are the same

#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
        printf("%d is greater",num1);
    else if(num2>num1)
        printf("%d is greater",num2);
    else
        printf("%d is greater",num1);
    getch();
}