#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM_STUDENTS 4
#define NUM_SUBJECTS 4

int main() {
    // 선언 및 초기화
    char students[NUM_STUDENTS][10] = { "철희", "철수", "영희", "영수" };
    char subjects[NUM_SUBJECTS][10] = { "국어", "영어", "수학", "국사" };
    int scores[NUM_STUDENTS][NUM_SUBJECTS];
    int studentTotal[NUM_STUDENTS] = { 0 };
    int subjectTotal[NUM_SUBJECTS] = { 0 };
    int grandTotal = 0;

    // 입력 받기
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("%s 학생의 성적을 입력하세요:\n", students[i]);
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            printf("%s 점수: ", subjects[j]);
            scanf("%d", &scores[i][j]);
            // 개인별 총점 및 과목별 총점 계산
            studentTotal[i] += scores[i][j];
            subjectTotal[j] += scores[i][j];
        }
    }

    // 결과 출력
    printf("\n\n");
    // 헤더 출력
    printf("%-10s", "학생");
    for (int j = 0; j < NUM_SUBJECTS; j++) {
        printf("%-10s", subjects[j]);
    }
    printf("%-10s\n", "개인별 총점");

    // 값 출력
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("%-10s", students[i]);
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            printf("%-10d", scores[i][j]);
        }
        printf("%-10d\n", studentTotal[i]);
        grandTotal += studentTotal[i]; // 전체 총점 계산
    }

    // 과목별 총점 출력
    printf("%-10s", "과목별 총점");
    for (int j = 0; j < NUM_SUBJECTS; j++) {
        printf("%-10d", subjectTotal[j]);
    }
    printf("\n");

    // 전체 총점 출력
    printf("%-10s%-10d\n", "전체 총점", grandTotal);

    return 0;
}
