#include <stdio.h>

int *new_integer()
{

int a =5;
int *p = &a;

	printf("Address of a: %p\n", p);
	
	return p;
}
	


int main(){
	
	int *b = new_integer();
	
	printf("\n vlue is %d", *b);


}
