/* Program to check whether given character is vowel or consonant. */

#include<stdio.h>

int main() {

	char c;
	char vowel[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
	int flag = 0;
	printf("Enter any character: ");

	scanf("%c",&c);

	for(int i = 0; i <= 9 ; i ++) {

		if (c == vowel[i]){
			flag = 1;
			break;
		}
	}

	if(flag == 1){

		printf("%c is Vowel\n",c);

	}
	else {

		printf("%c is Consonant\n",c);

	}

return 0;
}

	
