// local.c
/*
#include <stdio.h>

void double_this(int num)
{
	num *= 2;

}

int double_it(int num)
{

	num *= 2;
	return num;

}

int main(void)
{
	int x = 10;
	double_this(x);
	printf("x = %d\n", x);
	x = double_it(x);
	printf("x = %d", x);

	return 0;


}
*/
//��� ���
/*
x = 10
x = 20
*/

// ���������� �Լ��� ������ �Ҹ�.

// global.c

#include <stdio.h>

int count;
void print(void);
void increment(void);
void decrement(void);

int main(void)
{

	int i, j;
	print();
	for (i = 0; i < 5; i++)
	{
		increment();
	}
	print();
	for (i = 0; i < 5; i++)
	{
		decrement();
	}
	print();
	



}

void print(void)
{
	printf("count = %d\n", count);

}
void increment(void)
{
	count++;

}
void decrement(void)
{
	count--;
}

//��� ���
/*
count = 0
count = 5
count = 0

*/