#include<stdio.h>

int print_addr(int *x);

int print_addr(int *x) {

	printf("\nAddress of 10 from print_addr function : %p\n", x);
	*x = *x+10;	
return 0;
}

int main(){

	int adrs = 10;
int *p;
p = &adrs;
	printf("Address of 10 from main: %p\n",p);
	printf("\nValue of addrs before function call is %d", adrs);	
	
//calling the function print_addr with the value of the pointer of x
	print_addr(p);
	printf("\n value of adr after function call is %d", adrs);

}




