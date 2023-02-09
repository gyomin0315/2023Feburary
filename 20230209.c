//input_string.c
/*
#define _CRT_SECURE_NO_WARNINGS // Visual Studio 2019���� sscanf, sprintf ��� �� �ʿ�
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str_in[128] = "";
	char str_out[128] = "";

	int year, month, day;

	printf("yyyymmdd?");
	gets_s(str_in, sizeof(str_in));

	//gets(str_in);

	// �Է¹��� ���ڿ��� year,month,day�� ������ �����Ѵ�. sscanf���.

	sscanf(str_in, "%4d%2d%2d", &year, &month, &day);

	// year, month, day�� �������� �ִ��� �ٽ� sprintf�� �Ἥ �� ���� ������.

	sprintf(str_out, "Due Date: %04d-%02d-%02d", year, month, day);

	puts(str_out);

	//puts(str_out);

	return 0;

}
*/
//��� ���
/*
yyyymmdd?20230209
Due Date : 2023 - 02 - 09
*/

// gets_s (scan�� ���ڿ��� ������ �ּ� , �� �ּ��� ũ��(������)) => scanfó�� ���ڿ��� �޾ƿ��� �Լ�. ���ڿ��� �޾ƿͼ� ���� �ּҿ� �����Ѵ�.
// sscanf => �ϳ��� �����ҿ� �ִ� ���ڿ��� �������� �����ҿ� ������ �����Ѵ�.
// sscanf(�ڸ� ���ڿ��� ����ִ� �ּ�1, "������� �ڸ�����? ���������ڷ� ������.ex)%4d,%2d",�ڸ� ���ڿ����� ������ �ּҵ�. &year,&day..)
// sprintf => �߷��� ���ڿ����� �ٽ� �ϳ��� �����ҿ� �־���.
// sprintf(�߷��� ���ڿ����� ���� ������ �ּ�1,"������� ��������.",�߸� ���ڿ����� �ִ� �ּҵ� �ּ�2,�ּ�3...)
// puts�� printf�� �Ȱ�����, puts�� ���ڿ��ۿ� ��� ������. puts(�ּ�1)

// gets_s�� scanf�� ���̴� gets_s�� ���ڿ� ���̿� ������ ������ �ִٴ°���. 

// gets_s�� �ƴ϶� gets�� ���� �Ǹ� ���̴� �Ű� �Ⱦ��� �׳� gets(�ּ�1) �Ἥ �ּ�1�� ���ڿ� �״�� ���� �� ����.

// ��, puts(�ּ�1)�� ������ ���ڿ� �����. \n�� ���� �ʾƵ�, puts 2�� ���޾� ���� �����ٿ� ��µǴ°� Ȯ�� �� �� ����.


// pointer.c
#include <stdio.h>
#include <string.h>
#include <ctype.h> // ���� ó�� ���̺귯�� ��� �� �ʿ�

int main(void)
{
	char str[64] = "this is test string for char pointer.";
	char* p = str;

	while (1)
	{
		if (islower(*p))
			*p = toupper(*p);

		p = strchr(p, ' ');
		if (p == NULL)
			break;
		p++; // p�� ���� �������ڸ� ����Ű�� �ؾ� ��. 


	}
	
	puts(str);

	return 0;



}

//��� ���
/*
This Is Test String For Char Pointer.
*/

/*
 *p��� p[0]�� �ᵵ ��. 

int islower(int a) => a (ASCII �ڵ��� !) �� �ҹ������� Ȯ������..�ҹ����� ��쿡�� 1��ȯ.
 int toupper(int a) ==> a�� �빮�ڷ� �ٲ��ش�.

�� �ܿ���

int isalpha(int a) => a�� ���ĺ����� �ƴ��� ��������. ���� �빮�ڸ� 1, �ҹ��ڸ� 2, ������ �ƴϸ� 0 ��ȯ.
int isupper (int a) => a�� �빮������ �ƴ��� ����. �빮���ΰ�쿡�� 1 ��ȯ.
int isdigit(int a) => a�� �������� �ƴ��� ����. �̋� ������ ���� is���� �Լ��� ������ ASCII�ڵ带 �����Ѵ�.
					  ��, isdigit(3)�̶����, int a = 15, isdigit(a) ���� ���, ASCII�ڵ��� 0 ~ 9, ��, 48������ 57�������� ���� �ʱ� ������,
					  ���ڰ� �ƴ϶�� �Ǵ��Ѵ�. ���ڶ�� �Ǵ��ϰ� �Ϸ��� isdigit('3')�� ���� �������. 
*/