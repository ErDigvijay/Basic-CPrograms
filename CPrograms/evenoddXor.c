#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {

    int N = atoi(argv[1]);
    int result = N ^ 1;
    if(result == N + 1) {
        printf("Bitwise and of %d and 1 is %d\n", N, result);
        printf("%d is an Even Number\n",N);
    }
    else if(result == N - 1) {
        printf("Bitwise and of %d and 1 is %d\n", N, result);
        printf("%d is an Odd Number\n", N);
    }
return 0;
}