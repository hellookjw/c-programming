#include <stdio.h>

int main() {
    int found = 0; // 7의 배수이면서 동시에 9의 배수인 정수를 한 번만 출력하기 위한 플래그

    for (int num = 1; num < 100; num++) {
        if (num % 7 == 0 && num % 9 == 0) {
            if (!found) {
                printf("7의 배수이면서 9의 배수: %d\n", num);
                found = 1;
            }
        } else if (num % 7 == 0 || num % 9 == 0) {
            printf("7의 배수 또는 9의 배수: %d\n", num);
        }
    }

    return 0;
}
