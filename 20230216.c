// 사용자 정의 함수 부분부터 다시 복습
// 사용자 정의 함수 선언.
// 매개변수 있음 / 반환하는 값 있음

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
		printf("r=%d, 원의 면적 = %lf\n", i, area(i));


	}

	return 0;

}

double area(double radius)
{
	double result = radius * radius * PI;
	return result;

}
*/
//출력 결과
/*
r=1, 원의 면적 = 3.140000
r=2, 원의 면적 = 12.560000
r=3, 원의 면적 = 28.260000
r=4, 원의 면적 = 50.240000
r=5, 원의 면적 = 78.500000
*/

// (2) 매개변수 있음 / 반환하는 값 없음
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
	printf("r=%.0lf, 원의 면적 : %lf\n",radius,result);


}
*/
//출력 결과
/*
r=1, 원의 면적 : 3.140000
r=2, 원의 면적 : 12.560000
r=3, 원의 면적 : 28.260000
r=4, 원의 면적 : 50.240000
r=5, 원의 면적 : 78.500000
*/

// (3) 매개변수 없음 / 반환하는 값 있음
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
		printf("r=%d,원의 면적 : %lf\n", i, area());
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
//출력 결과 동일.

//(4) 매개변수 없음 / 반환하는 값 없음

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
		printf("r=%d 원의 면적 : %lf\n", i, result);
	}


}

//출력 결과
/*
r=1 원의 면적 : 3.140000
r=2 원의 면적 : 12.560000
r=3 원의 면적 : 28.260000
r=4 원의 면적 : 50.240000
r=5 원의 면적 : 78.500000

*/


