#include <stdio.h>

int main(){

	int num, i; 
	float sum=0;
	float avr;

	for(i = 1; i<=10; i++){
		num = i * i;
		sum = sum + num;
		
	}
		avr = sum / 10; 

	printf("the average is:%f\n", avr);

}
