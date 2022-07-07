//Program to take age and investment amount. Print the maturity amount a client will get

#include<stdio.h>
#include<conio.h>
int main()
{
    int age,amount,year;
    float rate=0.05,maturity;
    printf("Enter the age of the Client\n");
    scanf("%d",&age);

    if(age>=18 && age<25)
    {
        year=30;
        printf("Enter the amount of Investment\n");
        scanf("%d",&amount);

        if(amount>=10000 && amount<=100000)
        {
            printf("\nThe Policy Period is 30 Years\n");
            maturity=amount*(1+rate*year);
            printf("Maturity Amount = %f",maturity);
        }
        else
        printf("The Minimum Amount of Investment Should be 10000");
    }   
    else if(age>=25 && age<40)
    {
        year=20;
        printf("Enter the amount of Investment\n");
        scanf("%d",&amount);

        if(amount>=10000 && amount<=100000)
        {
            printf("\nThe Policy Period is 20 Years\n");
            maturity=amount*(1+rate*year);
            printf("Maturity Amount = %f",maturity);
        }
        else
        printf("The Minimum Amount of Investment Should be 10000");

    }
    else if(age>=40 && age <=55)
    {
        year=10;
        printf("Enter the amount of Investment\n");
        scanf("%d",&amount);

        if(amount>=10000 && amount<=100000)
        {
            printf("\nThe Policy Period is 10 Years\n");
            maturity=amount*(1+rate*year);
            printf("Maturity Amount = %f",maturity);
        }
        else
        printf("The Minimum Amount of Investment Should be 10000");
    }
    else
        printf("The Policy is not applicable for given age group");
    
    getch();
}