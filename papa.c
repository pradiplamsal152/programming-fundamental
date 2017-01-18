/*
student name: pradip lamsal
subject: fundamental programming
program: wap to enter length and breadth and display area of rectangle using function
lab sheet: 19
date:18 jan 2017
*/
#include<stdio.h>
#include<conio.h>
void area();
    int main()
    {
        area();
        return 0;
    }
    void area()
    {
        int l,b,a;
        printf("enter the length");
        scanf("%d",&l);
        printf("enter the breadth");
        scanf("%d",&b);
        a=l*b;
        printf("the area of rectangle is :%d",a);
        getch();

    }



