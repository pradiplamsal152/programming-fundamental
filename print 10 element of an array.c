/*
student name:pradip lamsal
subject:fundamental programming
program:wap to find factorial of given number using recursion function
lab sheet:23
date:29 jan 2017
*/
#include<stdio.h>
#include<conio.h>
int fact(int n);
int main()
{
    int a,b;
    printf("enter a number");
    scanf("%d",&a);
    b=fact(a);
    printf("the factorial of %d",a,b);
    return 0;
}
int fact(int n)
{
    if(n==1||n==0)
        return 1;
    else
        return n*fact(n-1);
}


