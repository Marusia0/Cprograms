#include <stdio.h>

void print_array(int *x){
	int i= 0;
	
	for (i = 0;i < 4; i++){
	printf("%d \t", *(x+i));
	}  
}

int main(){

int  arr[4]= {10,20,30,40};
int *p = &arr[0];
	print_array(p);
}

