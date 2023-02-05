// (03) swap_string.c
#define _CRT_SECURE_NO_WARNINGS // Visual Studio 2019에서 scanf, strcpy 사용 시 필요
#include <stdio.h>
#include <string.h>             // 문자열 처리 함수 사용 시 포함
int main(void) {
    char str1[10] = "";         // 널 문자열로 초기화한다.
    char str2[10] = "";         
    char temp[10];

    printf("2개의 문자열? ");
    scanf("%s %s", str1, str2); // 빈칸으로 구분해서 문자열 입력
    printf("str1 = %s, str2 = %s\n", str1, str2);

    
    strcpy(temp, str1);         // str1을 temp로 복사한다.
    strcpy(str1, str2);         // str2을 str1로 복사한다.
    strcpy(str2, temp);         // temp을 str2로 복사한다.
    printf("str1 = %s, str2 = %s\n", str1, str2);
    return 0;
}
// 출력 결과 작성
/*
2개의 문자열? a b
str1 = a, str2 = b
str1 = b, str2 = a

// (04) compare.c
#include <stdio.h>
#include <string.h>             // 문자열 처리 함수 사용 시 필요하다
int main(void) {
    char s1[10] = "apple";
    char s2[10] = "apple";

    if (s1 == s2)               // s1과 s2의 주소가 같은지 비교한다.
        printf("s1과 s2의 주소가 같습니다.\n");
    else
        printf("s1과 s2의 주소가 다릅니다.\n");

    if (strcmp(s1, s2) == 0)    // s1과 s2의 내용이 같은지 비교한다.
        printf("s1과 s2의 내용이 같습니다.\n");
    else
        printf("s1과 s2의 내용이 다릅니다.\n");
    return 0;
}
// 출력 결과 작성
/*
s1과 s2의 주소가 다릅니다.
s1과 s2의 내용이 같습니다.

*/
/*

#include <string.h> 이 문장 문자열 처리 함수 쓸 때 반드시 필요 !

[strcmp() 함수]

- strcmp(주소1, 주소2)
- 주소1이 가리키고 있는 곳의 문자열과 주소2가 가리키고 있는 문자열이 동일한지 비교한다
- 비교하는 두 문자열이 동일할 경우 0을 반환한다.
- 동일하지 않을 경우 1 또는 - 1을 반환한다.

*/