/*
stude name:pradip lamsal
subject: fundamental programing
program:wap to  declare and print multidimensional array
lab sheet:24
date:3 feb2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[2][2]={1,2,3,4},i,j;
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    {
        printf("%d\t",a[i][j]);

    }
    printf("\n");
    }
    return 0;
}


