/*
student name: pradip lamsal
programming: structure
lab sheet:25
date:6 feb 2017
*/
#include<stdio.h>
struct student {
    int id;
    int registration_number;
   float fee;
};
int main(){
    struct student pradip;
    pradip.id=100;
    pradip.registration_number=10050;
    pradip.fee=555.50;
    printf("pradip id = %d\n",pradip.id);
    printf("pradip registration_number=%d\n",pradip.registration_number);
    printf("pradip fee=%f\n",pradip.fee);
    return 0;
}
