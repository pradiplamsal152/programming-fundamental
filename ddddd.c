/*
student name: pradip lamsal
subject: programming fundamental
program: wap to read data from a file.
lab sheet: 26
date: 13 feb 2017
*/
#include<stdio.h>
int main(){
    FILE *fp;
    char data[255];
    fp=fopen("D:/sunway/test.txt","r");
    fscanf(fp,"%s", data);
    printf("%s",data);
    printf("\n");
    fclose(fp);
    return 0;
}
