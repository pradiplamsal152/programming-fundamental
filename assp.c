/*
student name: pradip lamsal
subject: fundamental programming
program: wap to count digits of any number
lab sheet:18
date: 16 jan 2017
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int num,count=0;
    printf("enter the number:\n");
    scanf("%d",&num);
    while(num>0)
        {
    num=num/10;
    count++;
        }
        printf("the number of digits of number is %d\n",count);
        getch();
        return 0;
}
