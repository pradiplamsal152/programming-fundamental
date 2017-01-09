/*
student name: pradip lamsal
subject: fundamental programming
lab sheet:16
program: to check the year is leap year or not
date:2017/01/08
roll:27
*/
#include<stdio.h>
int main()
{
	int year;
	printf("enter a year:\n");
	scanf("%d",&year);
	(year%4==0 && year%100!=0)?printf("the year is leap year"):
	(year%400==0?printf("the year is leap year"):printf("the year is not leap year");
	return 0;
}
