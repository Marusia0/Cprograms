#include <stdio.h>

int main() {

int i, j;
	
	printf("start of program\n");

	for(i = 0; i < 3; i = i + 1) {
	printf("i is %d\n", i); 
	
	for(j = 0; j < 5; j = j + 1)
	
	printf("i is %d, j is %d\n", i, j); 
	printf("end of i = %d loop\n", i); }
	printf("end of program\n");
	
	return 0; }

