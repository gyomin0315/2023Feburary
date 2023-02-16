// ����� ���� �Լ� �κк��� �ٽ� ����
// ����� ���� �Լ� ����.
// �Ű����� ���� / ��ȯ�ϴ� �� ����

//area.c
/*
#include <stdio.h>

#define PI 3.14

double area(double radius);

int main(void)
{
	int i;

	for (i = 1; i <= 5; i++)
	{
		printf("r=%d, ���� ���� = %lf\n", i, area(i));


	}

	return 0;

}

double area(double radius)
{
	double result = radius * radius * PI;
	return result;

}
*/
//��� ���
/*
r=1, ���� ���� = 3.140000
r=2, ���� ���� = 12.560000
r=3, ���� ���� = 28.260000
r=4, ���� ���� = 50.240000
r=5, ���� ���� = 78.500000
*/

// (2) �Ű����� ���� / ��ȯ�ϴ� �� ����
/*
#include <stdio.h>
#define PI 3.14
void area(double radius);
int main(void)
{
	int i;
	for (i = 1; i <= 5; i++)
	{
		area(i);
	}

	return 0;
}
void area(double radius)
{
	double result = radius * radius * PI;
	printf("r=%.0lf, ���� ���� : %lf\n",radius,result);


}
*/
//��� ���
/*
r=1, ���� ���� : 3.140000
r=2, ���� ���� : 12.560000
r=3, ���� ���� : 28.260000
r=4, ���� ���� : 50.240000
r=5, ���� ���� : 78.500000
*/

// (3) �Ű����� ���� / ��ȯ�ϴ� �� ����
/*
#include <stdio.h>

#define PI 3.14

double area(void);

//int radius = 1;

int main(void)
{
	int i;
	for (i = 1; i <= 5; i++)
	{
		printf("r=%d,���� ���� : %lf\n", i, area());
	}

	return 0;

}

double area(void)
{
	double result;
	static int radius = 1;
	result = radius * radius * PI;
	radius++;
	return result;
	

}
*/
//��� ��� ����.

//(4) �Ű����� ���� / ��ȯ�ϴ� �� ����

#include <stdio.h>

#define PI 3.14

void area(void);

int main(void)
{
	area();
	return 0;

}

void area(void)
{
	int i;
	for (i = 1; i <= 5; i++)
	{
		double result = i * i * PI;
		printf("r=%d ���� ���� : %lf\n", i, result);
	}


}

//��� ���
/*
r=1 ���� ���� : 3.140000
r=2 ���� ���� : 12.560000
r=3 ���� ���� : 28.260000
r=4 ���� ���� : 50.240000
r=5 ���� ���� : 78.500000

*/


