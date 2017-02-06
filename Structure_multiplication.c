/*
student name:pradip lamsal
program: wap to declare
lab sheet : 25
date: 6 feb 2017
*/
#include<stdio.h>
struct multiplication
{
    float a,b,c;
}mul;
void multiply(float x,float y,float z);
int main()
{

printf("enter a no");
scanf("%f",&mul.a);
printf("enter another no");
scanf("%f",&mul.b);
printf("enter third no");
scanf("%f",&mul.c);
multiply(mul.a,mul.b,mul.c);
return 0;
}
void multiply (float x, float y, float z)
{
    float result;
    result=x*y*z;
    printf("the multiplication result is %f",result);
}


