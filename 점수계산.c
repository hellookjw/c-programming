int main() {
    int korean, english, math;
    float average;

    // 국어, 영어, 수학 점수 입력
    printf("국어 점수를 입력하세요: ");
    scanf("%d", &korean);
    printf("영어 점수를 입력하세요: ");
    scanf("%d", &english);
    printf("수학 점수를 입력하세요: ");
    scanf("%d", &math);

    // 평균 점수 계산
    average = (korean + english + math) / 3.0;

    // 학점 부여
    char grade;
    if (average >= 90) {
        grade = 'A';
    } else if (average >= 80) {
        grade = 'B';
    } else if (average >= 70) {
        grade = 'C';
    } else if (average >= 50) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // 결과 출력
    printf("평균 점수: %.2f\n", average);
    printf("학점: %c\n", grade);

    return 0;

}
