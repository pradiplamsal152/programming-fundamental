/*
student name:pradip lamsal
subject: fundamental programing
program:wap to add two matrics [3*3], ask input from user
lab sheet:24
date:3 feb2017
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int a[3][3],b[3][3],c[3][3],i,j,sum[3][3];
    printf("1stmatrics \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter   number:\n");
            scanf("%d",&a[i][j]);
            }
    }
    printf("2nd matrics \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
        printf("enter     number:\n");
            scanf("%d",&b[i][j]);
        }
    }
    printf("3rd matrics \n");
    for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++){
    printf("enter      number:\n");
            scanf("%d",&c[i][j]);}

    }
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             sum[i][j]=a[i][j]+b[i][j]+c[i][j];
             printf("%d\t",sum[i][j]);
         }
         printf("\n");
     }
     return 0;
}
