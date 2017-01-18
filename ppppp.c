/*
student name: pradip lamsal
subject: fundamental programming
program: display the function
lab sheet: 19
date:18 jan 2017
*/
#include<stdio.h>
void function(int num);
int main()
{
int num;
printf("enter a number");
scanf("%d",&num);
function1(num);
return 0;
}
void function1(int num)
{
int mul;
mul=num*10;
printf("the no is :%d",mul);
}
