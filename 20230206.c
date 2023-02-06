// (04-1) compare.c 
#include <stdio.h>
#include <string.h>             // 문자열 처리 함수 사용 시 필요하다
int main(void) {
    char s1[10] = "Apple";
    char s2[10] = "apple";

    if (s1 == s2)               // s1과 s2의 주소가 같은지 비교한다.
        printf("s1과 s2의 주소가 같습니다.\n");
    else
        printf("s1과 s2의 주소가 다릅니다.\n");

    if (strcmp(s1, s2) == 0)    // s1과 s2의 내용이 같은지 비교한다.
        printf("s1과 s2의 내용이 같습니다.\n");
    else
        printf("s1과 s2의 내용이 다릅니다.=> %d\n", strcmp(s1, s2));
    return 0;
}
// 출력 결과 작성
/*
s1과 s2의 주소가 다릅니다.
s1과 s2의 내용이 다릅니다.=> -1

*/

//ASCII 코드로 앞에있는애가 작으면 - 1, 뒤에있는 애가 작으면 1

// (04-2) compare.c
#include <stdio.h>
#include <string.h>            
int main(void) {
    char s1[10] = "apple";
    char s2[10] = "Apple";

    if (s1 == s2)
        printf("s1과 s2의 주소가 같습니다.\n");
    else
        printf("s1과 s2의 주소가 다릅니다.\n");

    if (!strcmp(s1, s2))
        printf("s1과 s2의 내용이 같습니다.\n");
    else
        printf("s1과 s2의 내용이 다릅니다.=> %d\n", strcmp(s1, s2));
    return 0;
}
// 출력 결과 작성
/*
s1과 s2의 주소가 다릅니다.
s1과 s2의 내용이 다릅니다.=> 1

*/

// (05) concat.c
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
int main(void) {
    char sentence[100] = "";
    char word[20];

    do {
        printf("단어? ");
        scanf("%s", word);
        strcat(sentence, word);         // 입력받은 단어를 sentence의 끝에 붙인다.
        strcat(sentence, " ");          // 단어를 구분할 수 있도록 빈칸을 붙인다.
    } while (strcmp(word, ".") != 0);   // "."이 입력될 때까지 반복한다.

    printf("%s\n", sentence);
    return 0;
}
// 출력 결과 작성
/*
단어? Hi
단어? Hello
단어? me
단어? word
단어? C
단어? language
단어? end.
단어? .
Hi Hello me word C language end. .

*/
/*
[strcat() 함수]

- strcat(주소1, 주소2)
- 주소1이 가리키고 있는 곳의 문자열의 끝부분에 주소2가 가리키고 잇는 곳의 문자열을 붙인다.
- 주의할 사항 : 주소1이 가리키고 있는 문자열의 size는 넉넉해야함.

*/