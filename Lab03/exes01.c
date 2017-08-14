#include<stdio.h>

void swap(int *p1, int *p2);
 
int main(){

int x = 10; 
int y = 20;
swap( &x, &y);

	printf("X = %d\n", x);
	printf("Y = %d\n", y);
    return 0;
}

void swap(int *p1, int *p2){
	
	int change;
	change = *p1;
	*p1 = *p2;
	*p2 = change;
}


