/*
#include <stdio.h>

int main(void)
{
	char m;
	char* mp;
	char** mpp;

	m = 'a';
	mp = &m;
	mpp = &mp;

	printf("m�� �ּ� : %u %u %u\n", &m, mp, *mpp);
	printf("mp�� �ּ� : %u %u\n", &mp, mpp);
	printf("mpp�� �ּ� : %u\n", &mpp);

	printf("���� : %c %c %c", m, *mp, **mpp);

	return 0;


}
*/
//��� ���
/*
m�� �ּ� : 1966077524 1966077524 1966077524
mp�� �ּ� : 1966077560 1966077560
mpp�� �ּ� : 1966077592
���� : a a a
*/

// �����ʹ� ������ 4byte or 8byte (���Ͱ� 32bit�� 64bit��.) �̰�, ���������͵� �������� �� ! 
// ���������ʹ� ������ ���� ��ü�� �ּڰ��� ��. 

// swap.c

/*
#include <stdio.h>

void swap(int* p1, int *p2);

int main(void)
{
	int a = 1, b = 2;

	printf("a = %d, b = %d\n", a, b);

	swap(&a, &b);

	printf("a = %d, b = %d", a, b);

	return 0;

}

void swap(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}
*/
//��� ���
/*
a = 1, b = 2
a = 2, b = 1
*/

// ������ ���� �ʴ´ٸ�.
/*
#include <stdio.h>

void swap(int x, int y);

int main(void)
{
	int a = 1, b = 2;
	printf("a = %d, b = %d\n", a, b);

	swap(a, b);
	printf("a = %d, b = %d", a, b);
	return 0;


}

void swap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;

}
*/
//��� ���
/*
a = 1, b = 2
a = 1, b = 2
*/

// return ���ִ°͵� ���� , �Լ� ������ ����ȰŴ� ���������� �� �Ҹ�Ǵϱ� �翬�� main���� swap �� �ȵ�. �׳� ����� ���� �Լ� �ȿ��� ��� ��.

// array_size.c
#include <stdio.h>
int main(void)
{
	int arr[5];
	int size = 0;
	int i;
	printf("�迭�� ����Ʈ ũ�� : %d\n", sizeof(arr));
	size = sizeof(arr) / sizeof(arr[0]);
	printf("�迭�� ������ ���� : %d\n", size);

	for (i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;


}

//��� ���
/*
�迭�� ����Ʈ ũ�� : 20
�迭�� ������ ���� : 5
0 0 0 0 0
*/