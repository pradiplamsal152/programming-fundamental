/*
student name: pradip lamsal
subject: fundamental programming
program:wap to find maximum value in an array of 10 elements
lab sheet:24
date: 1 feb 2017
*/
#include<stdio.h>
#include<conio.h>
int main(){
int n[10],i,max=0;
for(i=0; i<10; i++)
{
    printf("enter a number:\n");
    scanf("%d",&n[i]);
}
for(i=0;i<=10;i++){
if(max<n[i]);
{
   max= n[i];
}
}
printf("the maximum value is:%d",max);
return 0;
}
