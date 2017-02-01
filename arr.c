/*
student name: pradip lamsal
subject: fundamental programming
program:wap to find the sum of elements of an array containing 10 elements
lab sheet:24
date: 1 feb 2017
*/
#include<stdio.h>
#include<conio.h>
int main(){
int n[10],i,sum=0;
for(i=0; i<10; i++)
{
    printf("enter a number:\n");
    scanf("%d",&n[i]);
}
for(i=0;i<=10;i++){
sum=sum+n[i];
}
printf("the sum of element of array:%d",sum);
return 0;
}

