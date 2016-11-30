/*
student name: pradip lamsal
subject: programming fundamental
program wap a program to use assignment operation
date:30/11/2016
*/

#include<stdio.h>
#include<conio.h>

int main(){
int a,b;
printf("enter first no");
scanf("%d",&a);

printf("enter second no");
scanf("%d",&b);

a+=b;
printf("+=%d\n",a);
a-=b;
printf("-=%d\n",a);
a*=b;
printf("*=%d\n",a);
a/=b;
printf("/=%d\n",a);
getch();
return (0);
}

