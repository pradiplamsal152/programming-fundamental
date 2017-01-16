/*
student name: pradip lamsal
subject: fundamental programming
program: wap to display the following patterns
lab sheet:18
date: 16 jan 2017
*/

#include<stdio.h>
#include<conio.h>
int main(){
int n,i,j;
    printf("enter the number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
            for(j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");
            }
            getch();
            return 0;

    }
