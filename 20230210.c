// sscanf������, �� �ּ��� �ִ� ���ڿ��� �������� �ּҿ��� ������ �����ؾ� �ϴϱ�, �ڿ� �ּڰ��� �����µ�,
// sprintf������ �������� ���ڿ��� �� �ּҿ� ���ĳ��°Ŵϱ� �ڿ� �ּڰ��� �ƴ�, ���� name�� �´�.

// ���� ���� ���� ���� �Է����� �����, ���⸦ �߽����� �빮�ڷ� ����� ���α׷�. 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <string.h>

int main(void)
{

	char word[128] ;
	char sentence[1024]="";
	char* p;
	p = sentence;

	while(1)
	{
		
		printf("���ڸ� �Է��Ͻÿ�:");
		scanf("%s", word);

		strcat(sentence, word);
		strcat(sentence, " ");

		if (*word == '.') // ���⼭ �׳� word��� ������� �� ���� �ּ��ӿ� ���� ! strcmp�� ���ų�, �����͸� �Ἥ ���������. 
			break;

	} 
	printf("%s", sentence);

	while (1)
	{
		if (islower(*p))
			*p = toupper(*p);

		p = strchr(p, ' ');
		if (p == NULL)
			break;

		p++;
	}

	puts(sentence);
	return 0;

}

//��� ���
/*
���ڸ� �Է��Ͻÿ�:my
���ڸ� �Է��Ͻÿ�:name
���ڸ� �Է��Ͻÿ�:
is
���ڸ� �Է��Ͻÿ�:gyomin
���ڸ� �Է��Ͻÿ�:.
my name is gyomin . My Name Is Gyomin .

*/

// const_pointer.c
/*
#include <stdio.h>
#include <string.h>            
#include <ctype.h>   // ���� ó�� ���̺귯�� ��� �� �ʿ�.

int count_space(const char* s) // s�� �Է� �Ű�����, const�پ����ϱ� ������ ����. 
{
	int count = 0;
	while (s[0] != NULL)
	{
		if (isspace(s[0])) // *s�� ����Ű�� ���� ���鹮������ �˻��Ѵ�.
			count++;

		s++; // s�� ���� ���ڸ� ����Ű�� ��. 

	}

	return count;



}

int main(void)
{
	char str[64] = "this program \ttests const pointer to string.\n";

	puts(str);
	printf("���� ������ ���� : %d", count_space(str));
	return 0;



}
*/
//��� ���
/*
this program    tests const pointer to string.

���� ������ ���� : 8
*/

