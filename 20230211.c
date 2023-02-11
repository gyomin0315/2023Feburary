// struct.c

/*

����ü�� ? �����ϰų� �������� ���� �ڷ������� ����.
�迭�� ������ �ڷ������� �޸𸮻� ���������� ���ִ� �ݸ鿡, ����ü�� ���� �ٸ� �� or ���� ���� ������. struct�� �޸𸮿� ���������� �����.
��, ����ü�� ����� ���� �ڷ����̶�� �� �� ����.

*/
/*
#include <stdio.h>

struct content {


	char title[40];
	int price;
	double rate;

};

int main(void)
{

	printf("content ����ü�� ũ�� : %d\n", sizeof(struct content));
	return 0;

}
#pragma pack(show) // �����Ϸ��� �޸� ���� ������ ���â�� ���� ǥ��. x64�� 16byte, x86�� 8byte.
*/
//��� ���
/*
content ����ü�� ũ�� : 56 

*/

/*
1byte¥�� 40��, 4byte�Ѱ�, 8byte�Ѱ� �ؼ� �� 52byte�� ���;� �ҰŰ����� 4byte�� �� ���Դ�.

�����Ϸ��� ����� �ڷ����� ���ؼ� �޸� �Ҵ��ϴ� ��Ģ 2������ �ֱ� ����.

1. ������ ������ �����ϱ� ���� �⺻ 4byte������ �켱 �Ҵ��Ѵ�. char �������� ������ �ϳ� ����������, �ϴ� 4byte�� ���,
   char�� ������ 2�� ���������� �� 4byte�ȿ� char�� ���� 2���� �ְ� �̷� ������...

2. ����ü �� ����߿� ���� ū ����� ũ�⿡ ������ �޴´�. ��, ���⼭ double 8byte�� �־�����, char���� 8byte �� ��Ƽ� �־��� ���̰�,
   int���� �⺻ �켱 8byte ����� ����. char�� 8 * 5 = 40 �ؼ� �� ���µ�, int�ʿ� 4byte�� ����.
   �׷��� 52 + 4(int�ʿ��� �� byte) = 56byte ��.

   */

//struct_2.c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct content {

	char title[40];
	int price;
	double rate;


};

int main(void)
{
	struct content c2, c3; // struct content�� c1, c2��� �̸�(����)�� ����. �� �� , �ʱⰪ : �����Ⱚ.
	struct content c1 = { "Avengers",8000,8.8 };

	strcpy(c2.title, "Aquaman");// . �� "~��"��� ���� ����. c1.title�̸� c1�� title�� ~ �� ��.
	c2.price = 7000;
	c2.rate = 7.7;

	strcpy(c3.title, "Batman");
	c3.price = 9000;
	c3.rate = 9.9;

	printf("c1 = ���� :%s  ����: %d  ����: %.1f\n", c1.title, c1.price, c1.rate);

	printf("c2 = ���� :%s  ����: %d  ����: %.1f\n", c2.title, c2.price, c2.rate);

	printf("c3 = ���� :%s  ����: %d  ����: %.1f\n", c3.title, c3.price, c3.rate);

	return 0;

}

//��� ���
/*
c1 = ���� :Avengers  ����: 8000  ����: 8.8
c2 = ���� :Aquaman  ����: 7000  ����: 7.7
c3 = ���� :Batman  ����: 9000  ����: 9.9
*/