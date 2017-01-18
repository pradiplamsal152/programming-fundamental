/*
student name: pradip lamsal
subject: fundamental programming
program: wap to fine cube of any no with no argument and no return types
lab sheet: 19
date:18 jan 2017
*/
#include<stdio.h>
void cube();
    int main()

{

     cube();
        getch();
        return 0;
    }
    void cube()
    {

        int n,result;
        printf("enter any number");
        scanf("%d",&n);
        result=n*n*n;
        printf("cube of the value is :%d",result);
        getch();
        return 0;
    }


