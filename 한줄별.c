#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int numOfLine;
	scanf("%d", &numOfLine);

	for (int i = 0; i < numOfLine; i++) {
		for (int n = 0; n < i + 1; n++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
