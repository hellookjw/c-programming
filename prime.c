#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	int isPrime = 1;
	printf("please enter a number:");
	scanf("%d", &num);
	for (int i = num - 1; i > 1; i--) {
		if (num % i == 0) {
			printf("It is not a prime number.");
			isPrime = 0;
			break;
		}
	}
	if (isPrime == 1) {
		printf("It is a prime number.");
	}
	return 0;
}
