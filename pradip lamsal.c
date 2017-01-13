/*
student name: pradip lamsal
subject: fundamental programming
program: wap to calculate sum of digits of any number
roll:27
lab sheet:17
date:13/jan/2017
*/

#include<stdio.h>
int main(){


int n,sum=0,z=0;
    printf("Enter your number:\n");
    scanf("%d",&n);
    while(n>0)
    {

        z=n%20;
        sum=sum+z;
        n=n/20;

    }
printf("the sum of digits is %d",sum);
getch();
return 0;
}

