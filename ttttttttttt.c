/*
student name: pradip lamsal
subject: programming fundamental
program: wap to create a file and insert data to it
lab sheet: 26
date: 13 feb 2017
*/
#include<stdio.h>
int main(){
    FILE *fp;
    int r=1;
    char data[255]="the data on thr file:";
    fp=fopen("D:/sunway/test.txt","r");
    do{
    printf("%s",data);
    printf("\n");
    r=fscanf(fp,"%s",data);
    }while(r==1);
    fclose(fp);
    return 0;
}
