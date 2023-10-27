#include <stdio.h>

int main() {
    int num;

    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    int square = num * num;

    printf("%d의 제곱은 %d입니다.\n", num, square);

    return 0;
}
