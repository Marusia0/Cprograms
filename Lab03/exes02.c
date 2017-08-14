#include <stdio.h>

int main(){

int  arr[4]= {10,20,30,40};
int i;

   	for(i = 0; i < 4; ++i){
   	printf("Address of array[%d] = %d\n", i, *(arr+i));

//printf("Address of array[%d] = %s\n", i, &array[i]);
	}

	return 0;
}
