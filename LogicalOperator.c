/*
Student Name:Sambhav Siwakoti
Subject:Programming Fudamental
Roll No.:31
Lab Sheet No.:10
Program:WAP to print logical operator.
Date:7 November 2016
*/
#include<Stdio.h>
#include<conio.h>
int main(){
int a;
printf("Enter the marks \n");
scanf("%d",&a);
if(a>=80&&a<100)
{
    printf("You have secured distinction \n");
}
if(a>=60&&a<80)
{
    printf("You have secured first division \n");

}
if(a>=45&&a<60)
{
    printf("You have secured second division \n");
}
if(a>=35&&a<45)
{
    printf("You have secured third division\n");


}
if(a>=0&&a<35)
{
    printf("You have failed \n");
getch();
return 0;
}
}
