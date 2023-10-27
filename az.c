#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 1, z = 1;
	while (a <= 9) {
		z = 1;
		while (z <= 9) {
			if (a * 10 + a + z*10 + z == 99) {
				printf("A: %d, Z: %d\n", a, z);

			}
			z++;
		}
		a++;
	}
	return 0;
}
