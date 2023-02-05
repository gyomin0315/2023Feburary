// (03) swap_string.c
#define _CRT_SECURE_NO_WARNINGS // Visual Studio 2019���� scanf, strcpy ��� �� �ʿ�
#include <stdio.h>
#include <string.h>             // ���ڿ� ó�� �Լ� ��� �� ����
int main(void) {
    char str1[10] = "";         // �� ���ڿ��� �ʱ�ȭ�Ѵ�.
    char str2[10] = "";         
    char temp[10];

    printf("2���� ���ڿ�? ");
    scanf("%s %s", str1, str2); // ��ĭ���� �����ؼ� ���ڿ� �Է�
    printf("str1 = %s, str2 = %s\n", str1, str2);

    
    strcpy(temp, str1);         // str1�� temp�� �����Ѵ�.
    strcpy(str1, str2);         // str2�� str1�� �����Ѵ�.
    strcpy(str2, temp);         // temp�� str2�� �����Ѵ�.
    printf("str1 = %s, str2 = %s\n", str1, str2);
    return 0;
}
// ��� ��� �ۼ�
/*
2���� ���ڿ�? a b
str1 = a, str2 = b
str1 = b, str2 = a

// (04) compare.c
#include <stdio.h>
#include <string.h>             // ���ڿ� ó�� �Լ� ��� �� �ʿ��ϴ�
int main(void) {
    char s1[10] = "apple";
    char s2[10] = "apple";

    if (s1 == s2)               // s1�� s2�� �ּҰ� ������ ���Ѵ�.
        printf("s1�� s2�� �ּҰ� �����ϴ�.\n");
    else
        printf("s1�� s2�� �ּҰ� �ٸ��ϴ�.\n");

    if (strcmp(s1, s2) == 0)    // s1�� s2�� ������ ������ ���Ѵ�.
        printf("s1�� s2�� ������ �����ϴ�.\n");
    else
        printf("s1�� s2�� ������ �ٸ��ϴ�.\n");
    return 0;
}
// ��� ��� �ۼ�
/*
s1�� s2�� �ּҰ� �ٸ��ϴ�.
s1�� s2�� ������ �����ϴ�.

*/
/*

#include <string.h> �� ���� ���ڿ� ó�� �Լ� �� �� �ݵ�� �ʿ� !

[strcmp() �Լ�]

- strcmp(�ּ�1, �ּ�2)
- �ּ�1�� ����Ű�� �ִ� ���� ���ڿ��� �ּ�2�� ����Ű�� �ִ� ���ڿ��� �������� ���Ѵ�
- ���ϴ� �� ���ڿ��� ������ ��� 0�� ��ȯ�Ѵ�.
- �������� ���� ��� 1 �Ǵ� - 1�� ��ȯ�Ѵ�.

*/