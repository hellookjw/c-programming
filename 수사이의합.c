#include <stdio.h>

int main() {
    int num1, num2;
    int sum = 0;

    printf("첫 번째 정수를 입력하세요: ");
    scanf("%d", &num1);
    printf("두 번째 정수를 입력하세요 (첫 번째 정수보다 큰 값): ");
    scanf("%d", &num2);

    if (num2 <= num1) {
        printf("두 번째 입력 값은 첫 번째 입력 값보다 커야 합니다.\n");
        return 1; // 프로그램 종료
    }

    for (int i = num1; i <= num2; i++) {
        sum += i;
    }

    printf("두 정수를 포함하여 그 사이에 존재하는 정수들의 합: %d\n", sum);

    return 0;
}
