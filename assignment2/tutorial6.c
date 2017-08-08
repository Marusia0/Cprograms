#include <stdio.h>

int main() {

int day, i;

	for(day = 2; day <= 3; day = day + 1) {
	printf("On the %d day of Christmas, ", day);
	printf("my true love gave to me\n"); 

	for(i = day; i > 0; i = i - 1) {
	
	if(i == 1) {
	if(day == 1) 
	printf("first,\n"); 

	else printf("And a "); 
	printf("partridge in a pear tree.\n"); 

	} else if(i == 2) {
	printf("second,\n"); 

	} else if(i == 3) {
	printf("third,\n"); 

	} printf("\n"); }
	return 0; 

	}	 

}

