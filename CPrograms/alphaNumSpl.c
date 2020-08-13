// Program to check whether given char is alphabet or number or special character

#include<stdio.h>

int main() {

	char c ;

	printf("Enter any character: ");
	scanf("%c",&c);

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {

		printf("%c is a Alphabet\n",c);
	}
	else if( c >= '0' && c <= '9') {

		printf("%c is a Number\n",c);

	}

	else {
		printf("%c character is a Special Character\n",c);

	}

return 0;

}

