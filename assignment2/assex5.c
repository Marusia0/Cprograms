#include <stdio.h>

int main(){

int i,n1, n2, fnum;  

	for(i=0; i<=10; i++){
	
	n1 = i;
	n2 = i + n1;
	fnum = n1 + n2;
	
	printf("Fibonacci of %i:%d\n",i, fnum);
	}	
	
}
