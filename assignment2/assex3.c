#include <stdio.h>

int main(){

int i, num; 

	for(i=1; i <= 10; i++){
	num = i%2;
	
	if(num==0){ 
 
	printf("%d is even\n", i);
	
	}else{
	
	printf("%d is odd\n", i);
	
	}
} 

}
