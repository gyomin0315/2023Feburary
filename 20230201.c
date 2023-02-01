/*
#include <stdio.h>
#define ARR_SIZE 5
void absolute(int *x);

int main(void)
{
	int x[] = { -4,0,-28,3,-12 };
	int y[ARR_SIZE] = { 0 };

	for (int i = 0; i < ARR_SIZE; i++)
	{
		absolute(&x[i]);
		y[i] = x[i];
		printf("%d , ", y[i]);

	}

	

	return 0;
}

void absolute(int *x)
{
	*x = *x > 0 ? *x : -*x;
	//return x;

}
*/
// 삼항 연산자에서, 결과로 나온 값을 꼭 어디에 저장하거나, 리턴을 반드시 그 라인에서 시켜줘야함.
// 자동적으로 x가 절댓값이 씌워지는게 아님 !

// 포인터변수 이용해서 사용자 정의함수 void로 반환값 설정해서 해주는거 하고, 반환값 있는것도 해볼 것.

// 2d_array.c

/*
#include <stdio.h>

#define ROW 3
#define COL 2

int main(void)
{
	int data[ROW][COL];
	int i, j, k = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
			data[i][j] = ++k;
	}

	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{ 
			printf("%d ", data[i][j]);
			
		}
		printf("\n");
	}

	printf("sizeof(data) = %11d\n", sizeof(data));
	printf("sizeof(data[0]) = %8d\n", sizeof(data[0]));
	printf("sizeof(data[0][0]) = %5d", sizeof(data[0][0]));

	return 0;
}
*/
//출력 결과
/*
1 2
3 4
5 6
sizeof(data) =          24
sizeof(data[0]) =        8
sizeof(data[0][0]) =     4
*/


// 1월 29일자 내 프로그램에서, 포인터 변수의 크기를 측정할때는, *mp가 아니라 mp로 측정했어야 했음.

/*
#include <stdio.h>
int main(void)
{
	char* mp;
	char **mpp;
	printf("*mp size : %d, *mpp size: %d", sizeof(mp), sizeof(mpp));
}
*/
//출력 결과
/*
*mp size : 8, *mpp size: 8
*/

// => 포인터형 변수의 크기는, 데이터형과 상관없이 컴퓨터가 32bit면 4byte, 64bit면 8byte임. 그만큼이 주소를 저장할수 있는 메모리.

// pointer_size.c

#include <stdio.h>

int main(void)
{
	int* pi;
	double* pd;
	char* pc;

	printf("sizeof(pi) = %d\n", sizeof(pi)); // 내가 선언한 포인터 변수의 크기를 구해보자.
	printf("sizeof(pd) = %d\n", sizeof(pd));
	printf("sizeof(pc) = %d\n", sizeof(pc));
	printf("sizeof(int*) = %d\n", sizeof(int*)); // 주소를 저장하는 데이터형 (포인터형) 의 크기를 구해보자.
	printf("sizeof(double) = %d\n", sizeof(double*));
	printf("sizeof(char*) = %d", sizeof(char*));


}


// 출력 결과
/*
sizeof(pi) = 8
sizeof(pd) = 8
sizeof(pc) = 8
sizeof(int*) = 8
sizeof(double) = 8
sizeof(char*) = 8
*/

