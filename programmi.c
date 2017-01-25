/*
student name:pradip lamsal
subject:fundamental programming
program: wap to ask radius of circle in main()function claculate area of circle display the area()
date:24 jan 2017
lab sheet:22
*/
#include<stdio.h>
void area(int r);
void main()
{
    int r;
    printf("enter the radius");
    scanf("%d",&r);
    area(r);
}
void area(int r)
{
    float a,p=3.14;
    a=p*r*r;
    printf("the area is %f",a);

}
