#include <stdio.h>

int main(){
	
	int i, fact=1;
	int num = 7;

	for(i = 1;i <= num; i++){
	
	fact = fact * i; 
	
	printf("Factorial number %d is: %d\n", fact, i);
	}

	return 0;

}
