// find.c
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char filename[] = "readme.txt";
	char* p = NULL;

	p = strchr(filename, '.');

	if (p != NULL)
	{
		printf("������ extension�� : %s\n", p + 1);
	}

	p = strstr(filename, ".txt");

	if (p != NULL)
	{
		printf("filetype : text");
	}

	return 0;
}
*/
//��� ���
/*
������ extension�� : txt
filetype : text
*/

//  strchr(�ּ�1, ����1) => �ּ�1�� �ִ� ���ڿ����� ����1�� �ִ��� ����, ����1�� ������ �� ����1�� �ּҸ� ��ȯ.

// strstr(�ּ�1, ���ڿ�1) => �ּ�1�� �ִ� ���ڿ����� ���ڿ�1�� ã��, ������ �� ���ڿ�1�� �ּҸ� ��ȯ.

// token.c


#define _CRT_SECURE_NO_WARNINGS     //strtok ��� �� �ʿ�
#include <stdio.h>
#include <string.h>

int main(void)
{

	char phone[] = "010-1234-5678";
	char* p = NULL;

	p = strtok(phone, "-");
	
	printf("mobile : %s\n", p);

	// printf("%s\n", phone); => 010����.

	p = strtok(NULL, "-"); 

	printf("prefix : %s\n", p);

	p = strtok(NULL, "-");

	printf("line no : % s\n", p);

	return 0;

}

//��� ���
/*
mobile : 010
prefix : 1234
line no : 5678
*/

/*
strtok(�ּ�1,���ڿ�1) : �ּ�1�� ���ڿ��� ���ڿ�1�� �������� �տ������� �ڸ���. 
�� ó�� strtok �Լ��� ���� ����, �ּ�1�� �־��ְ�, �� �������ʹ� NULL�� �־��ش�.
=> i) ó���� strtok�Լ��� �Ἥ �����ڸ� ã������, �� �����ڸ� ����ؼ� NULL�� �־��ְ� �ȴ�.
   ii) �׷��� phone�� 010NULL1234-5678�� �ɰ���.
   iii) strtok(NULL,"-") �� �ϰ� �Ǹ�, ������ �����ڸ� ã�Ҵ� ������ NULL���� �����ؼ� "-"�� ã����°� ��.
   iv) �׷��� 1234�� ��������, �� ���� -�� NULL�� �ٲ��ְ� ��.
   v) phone�� 010NULL1234NULL5678�� ��. 

   i)�� �߿� ���� !
*/

