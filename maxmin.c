int findMax(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

// 세 개의 정수 중에서 가장 작은 수를 반환하는 함수
int findMin(int a, int b, int c) {
    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    return min;
}

int main() {
    int num1, num2, num3;
    printf("세 개의 정수를 입력하세요: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int max = findMax(num1, num2, num3);
    int min = findMin(num1, num2, num3);

    printf("가장 큰 수는: %d\n", max);
    printf("가장 작은 수는: %d\n", min);

    return 0;
}
이 코드는 사용자로부터 세 개의 정수를 입력받고, findMax 함수와 findMin 함수를 사용하여 가장 큰 수와 가장 작은 수를 계산한 후 결과를 출력합니다.




c
Copy code
#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("세 개의 정수를 입력하세요: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    int min = (num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);

    printf("가장 큰 수는: %d\n", max);
    printf("가장 작은 수는: %d\n", min);

    return 0;
}
이 코드는 삼항 연산자를 사용하여 더 간결하게 가장 큰 수와 가장 작은 수를 찾아 출력합니다.





