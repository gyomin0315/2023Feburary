// (04-1) compare.c 
#include <stdio.h>
#include <string.h>             // ���ڿ� ó�� �Լ� ��� �� �ʿ��ϴ�
int main(void) {
    char s1[10] = "Apple";
    char s2[10] = "apple";

    if (s1 == s2)               // s1�� s2�� �ּҰ� ������ ���Ѵ�.
        printf("s1�� s2�� �ּҰ� �����ϴ�.\n");
    else
        printf("s1�� s2�� �ּҰ� �ٸ��ϴ�.\n");

    if (strcmp(s1, s2) == 0)    // s1�� s2�� ������ ������ ���Ѵ�.
        printf("s1�� s2�� ������ �����ϴ�.\n");
    else
        printf("s1�� s2�� ������ �ٸ��ϴ�.=> %d\n", strcmp(s1, s2));
    return 0;
}
// ��� ��� �ۼ�
/*
s1�� s2�� �ּҰ� �ٸ��ϴ�.
s1�� s2�� ������ �ٸ��ϴ�.=> -1

*/

//ASCII �ڵ�� �տ��ִ¾ְ� ������ - 1, �ڿ��ִ� �ְ� ������ 1

// (04-2) compare.c
#include <stdio.h>
#include <string.h>            
int main(void) {
    char s1[10] = "apple";
    char s2[10] = "Apple";

    if (s1 == s2)
        printf("s1�� s2�� �ּҰ� �����ϴ�.\n");
    else
        printf("s1�� s2�� �ּҰ� �ٸ��ϴ�.\n");

    if (!strcmp(s1, s2))
        printf("s1�� s2�� ������ �����ϴ�.\n");
    else
        printf("s1�� s2�� ������ �ٸ��ϴ�.=> %d\n", strcmp(s1, s2));
    return 0;
}
// ��� ��� �ۼ�
/*
s1�� s2�� �ּҰ� �ٸ��ϴ�.
s1�� s2�� ������ �ٸ��ϴ�.=> 1

*/

// (05) concat.c
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
int main(void) {
    char sentence[100] = "";
    char word[20];

    do {
        printf("�ܾ�? ");
        scanf("%s", word);
        strcat(sentence, word);         // �Է¹��� �ܾ sentence�� ���� ���δ�.
        strcat(sentence, " ");          // �ܾ ������ �� �ֵ��� ��ĭ�� ���δ�.
    } while (strcmp(word, ".") != 0);   // "."�� �Էµ� ������ �ݺ��Ѵ�.

    printf("%s\n", sentence);
    return 0;
}
// ��� ��� �ۼ�
/*
�ܾ�? Hi
�ܾ�? Hello
�ܾ�? me
�ܾ�? word
�ܾ�? C
�ܾ�? language
�ܾ�? end.
�ܾ�? .
Hi Hello me word C language end. .

*/
/*
[strcat() �Լ�]

- strcat(�ּ�1, �ּ�2)
- �ּ�1�� ����Ű�� �ִ� ���� ���ڿ��� ���κп� �ּ�2�� ����Ű�� �մ� ���� ���ڿ��� ���δ�.
- ������ ���� : �ּ�1�� ����Ű�� �ִ� ���ڿ��� size�� �˳��ؾ���.

*/