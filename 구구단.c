#include <stdio.h>

int main() {
	int bigCounter = 1;
	int smallCounter = 1;
	while (bigCounter < 10) {
		smallCounter = 1;
		while (smallCounter <10 ) {
			printf("% d * %d = % d\n", bigCounter, smallCounter, bigCounter * smallCounter);
			smallCounter++;
		}
		bigCounter++;
		printf("\n");
	}
	return 0;
}
