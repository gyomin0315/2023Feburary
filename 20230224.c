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

	printf("m의 주소 : %u %u %u\n", &m, mp, *mpp);
	printf("mp의 주소 : %u %u\n", &mp, mpp);
	printf("mpp의 주소 : %u\n", &mpp);

	printf("값은 : %c %c %c", m, *mp, **mpp);

	return 0;


}
*/
//출력 결과
/*
m의 주소 : 1966077524 1966077524 1966077524
mp의 주소 : 1966077560 1966077560
mpp의 주소 : 1966077592
값은 : a a a
*/

// 포인터는 무조건 4byte or 8byte (컴터가 32bit냐 64bit냐.) 이고, 이중포인터도 마찬가지 임 ! 
// 이중포인터는 포인터 변수 자체의 주솟값이 들어감. 

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
//출력 결과
/*
a = 1, b = 2
a = 2, b = 1
*/

// 포인터 쓰지 않는다면.
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
//출력 결과
/*
a = 1, b = 2
a = 1, b = 2
*/

// return 해주는것도 없고 , 함수 내에서 선언된거는 빠져나오면 다 소멸되니까 당연히 main에서 swap 은 안됨. 그냥 사용자 정의 함수 안에서 놀고 끝.

// array_size.c
#include <stdio.h>
int main(void)
{
	int arr[5];
	int size = 0;
	int i;
	printf("배열의 바이트 크기 : %d\n", sizeof(arr));
	size = sizeof(arr) / sizeof(arr[0]);
	printf("배열의 원소의 갯수 : %d\n", size);

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

//출력 결과
/*
배열의 바이트 크기 : 20
배열의 원소의 갯수 : 5
0 0 0 0 0
*/