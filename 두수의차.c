#include <stdio.h>

int main() {
    int num1, num2;

    printf("두 개의 정수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);

    int difference;

    if (num1 > num2) {
        difference = num1 - num2;
    } else {
        difference = num2 - num1;
    }

    printf("두 수의 차: %d\n", difference);

    return 0;
}
