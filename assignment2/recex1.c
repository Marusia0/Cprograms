#include <stdio.h>

int main(){
	
int num1,num2, num3, fact1, fact2, fact3; 
	
	num1=3;
	num2=4;
	num3=5;

	fact1= num1 * (num1-1);
	fact2= num2 * (num2-1);
	fact3= num3 * (num3-1);

	printf("\nfactorial of %d is:%d", num1, fact1);
	printf("\nfactorial of %d is:%d", num2, fact2);
	printf("\nfactorial of %d is:%d", num3, fact3);

	return 0;
}

	
