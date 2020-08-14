/* Program to swap two numbers without using third variable 
   In this program we will take inputs from command line */

#include<stdio.h>

int main(int arg, char *argv[]) {

	int x = atoi(argv[1]);
	int y = atoi(argv[2]);

	printf("\nBefore Swapping\n");
	printf("x = %d and y = %d \n",x,y);

	// to swap two numbers we will perform addition and substraction 
	// between given two numbers
	
	x = x + y;  
	y = x - y;
	x = x - y;

	printf("\nAfter Swapping\n");
	printf("x = %d and y = %d \n",x,y);

return 0;
}
