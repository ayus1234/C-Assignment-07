//Program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed

#include<stdio.h>
#include<conio.h>
int main()
{
    int mark1,mark2,mark3,mark4,mark5;
    printf("Enter the marks of five subjects\n");
    scanf("%d %d %d %d %d",&mark1,&mark2,&mark3,&mark4,&mark5);
    if(mark1>=33 && mark2>=33 && mark3>=33 && mark4>=33 && mark5>=33)
        printf("Canditate has Passed the Examination");
    else
        printf("Canditate has Failed the Examination");
    getch();
}