#include <stdio.h>

int main() {
    int result = 0;

    // 3 * 8 계산
    for (int i = 0; i < 8; i++) {
        result += 3; // 3을 8번 더함
    }

    // 3 * 8 / 4 계산
    for (int i = 0; i < 2; i++) {
        result -= 4; // 8을 4번 뺌
    }

    printf("결과: %d\n", result);

    return 0;
}
