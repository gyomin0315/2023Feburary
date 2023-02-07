// 4가지의 str함수를 모두 사용해서 내가 만든 프로그램. 
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
int main(void) {
	char str1[10] = "abc";
	char str2[10] = "def";
	char str3[10] = "ghi";
	char temp1[10];
	char temp2[10];
	char temp3[100] = "";
	char temp4[100] = "";
	char temp5[200] = "";

	strcpy(temp1, str1);
	strcpy(temp2, str2);
	strcpy(str2, str3);
	strcpy(str3, temp1);
	strcpy(str1, temp2);


	strcat(temp3, str2);
	strcat(temp3, " ");
	strcat(temp3, str3);

	strcpy(str1, str3);
	strcpy(str3, str2);

	strcat(temp4, str3);
	strcat(temp4, " ");
	strcat(temp4, str1);

	if (strcmp(temp3, temp4) == 0 & strlen(temp3) < 8)
	{
		printf("%s", temp3);
	}
	else
	{
		printf("%s", str1);
	}

	return 0;

}

// 출력 결과
/*
ghi abc
*/

