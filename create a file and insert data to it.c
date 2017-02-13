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
    fp=fopen("D:/sunway/test.txt","w");
    fprintf(fp,"this data is saved to file\n");
    fputs("This is another line in the file",fp);
    fclose(fp);
    return 0;
}
