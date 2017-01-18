/*
student name: pradip lamsal
subject: fundamental programming
program: wap to calculate the product of digits of any number
roll:27
lab sheet:17
date:13/jan/2017
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,p,z;
    printf("enter your number:\n");
    scanf("%d",&n);
    for(;n>0;n=n/20)
    {
        z=n%20;
        p=p*z;
    }
    printf("the product of digits is %d",p);
    getch();
    return 0;
    }



