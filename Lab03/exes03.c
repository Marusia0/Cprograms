#include <stdio.h>

int main(){
       	int arr[] = {10, 20, 30, 40};
	int i; 

	for (i = 0; i < 1; i++){
	
	printf("Alternative notation %d\n", *(arr+0));
	printf("Alternative notation %d\n", *(arr+1));
	printf("Alternative notation %d\n", *(arr+2));
	printf("Alternative notation %d\n", *(arr+3));
	}
	
	return 0;

}

