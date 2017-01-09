/*
student name: pradip lamsal
subject: fundamental programming
lab sheet:16
roll:27
program : to check character is alphabate or not using ternary operator
date:2017/01/08
*/

#include<stdio.h>
int main(){
	char n;
	int ASCII;
	printf("enter the character:\n");
	scanf("%c",&n);
	ASCII=n;
	((ASCII>=65 && ASCII<=90) || (ASCII>=97 && ASCII<=122))?printf("the character is alphabate :\n"):printf("the character is not alphabate :\n");
	return 0;
}

	
	
