/*
student name:pradip lamsal
subject: fundamental programing
program:wap to add two matrics [2*2], ask input from user
lab sheet:24
date:3 feb2017
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int a[2][2],b[2][2],c[2][2],i,j,sum[2][2];
    printf("1stmatrix\n");
    for(i=0;i<2;i++)

    {
        for(j=0;j<2;j++)
        {
            printf("enter  number:\n");
            scanf("%d",&a[i][j]);

        }
    }
        printf("2nd matrix\n");
        for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("enter number:\n");
            scanf("%d",&b[i][j]);

        }
    }
     for(i=0;i<2;i++)
     {
         for(j=0;j<2;j++)
         {
             sum[i][j]=a[i][j]+b[i][j];
            printf("%d\t",sum[i][j]);
         }
         printf("\n");

     }
     return 0;
}
