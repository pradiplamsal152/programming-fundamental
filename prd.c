/*
student name : pradip lamsal
subject: programming fundementaL
Roll:23
Lab: write a program to demostratation the working of increase and decrease operators
date:02/12/2016
*/
#include<stdio.h>
#include<conio.h>

int main(){
int a;
printf("enter the number:\n");
scanf("%d",&a);

printf("increment post of number is:%d\n",a++);

printf("increment pre of number is:%d\n",++a);
printf("decrement post of numbeer is:%d\n",a--);
printf("decrement pre of number is:%d\n",--a);


getch();
return 0;
}
