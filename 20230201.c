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
// ���� �����ڿ���, ����� ���� ���� �� ��� �����ϰų�, ������ �ݵ�� �� ���ο��� ���������.
// �ڵ������� x�� ������ �������°� �ƴ� !

// �����ͺ��� �̿��ؼ� ����� �����Լ� void�� ��ȯ�� �����ؼ� ���ִ°� �ϰ�, ��ȯ�� �ִ°͵� �غ� ��.

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
//��� ���
/*
1 2
3 4
5 6
sizeof(data) =          24
sizeof(data[0]) =        8
sizeof(data[0][0]) =     4
*/


// 1�� 29���� �� ���α׷�����, ������ ������ ũ�⸦ �����Ҷ���, *mp�� �ƴ϶� mp�� �����߾�� ����.

/*
#include <stdio.h>
int main(void)
{
	char* mp;
	char **mpp;
	printf("*mp size : %d, *mpp size: %d", sizeof(mp), sizeof(mpp));
}
*/
//��� ���
/*
*mp size : 8, *mpp size: 8
*/

// => �������� ������ ũ���, ���������� ������� ��ǻ�Ͱ� 32bit�� 4byte, 64bit�� 8byte��. �׸�ŭ�� �ּҸ� �����Ҽ� �ִ� �޸�.

// pointer_size.c

#include <stdio.h>

int main(void)
{
	int* pi;
	double* pd;
	char* pc;

	printf("sizeof(pi) = %d\n", sizeof(pi)); // ���� ������ ������ ������ ũ�⸦ ���غ���.
	printf("sizeof(pd) = %d\n", sizeof(pd));
	printf("sizeof(pc) = %d\n", sizeof(pc));
	printf("sizeof(int*) = %d\n", sizeof(int*)); // �ּҸ� �����ϴ� �������� (��������) �� ũ�⸦ ���غ���.
	printf("sizeof(double) = %d\n", sizeof(double*));
	printf("sizeof(char*) = %d", sizeof(char*));


}


// ��� ���
/*
sizeof(pi) = 8
sizeof(pd) = 8
sizeof(pc) = 8
sizeof(int*) = 8
sizeof(double) = 8
sizeof(char*) = 8
*/

