/*
student name: pradip lamsal
subject: fundamental programming
program: wap to print reverse of any number
lab sheet:18
date: 16 jan 2017
*/
#include<stdio.h>
#include<conio.h>
int main(){
int n,rem,rev=0;
printf("enter any number");
scanf("%d",&n);
while(n>0)
{
    rem= n%10;
    rev=rev*10+rem;
n=n/10;
}
printf("the reverse of a number is : %d",rev);
getch();
return 0;
}



