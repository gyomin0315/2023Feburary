/*
#include <stdio.h>

int main(void)
{
	int arr[] = { 1,2,3,4,5 };
	int* p = &arr[0];

	int i;
	for (i = 0; i < 5; i++,p++)
	{
		printf("p = %u", p);
		printf("  *p = %d", *p);
		printf("\n");

	}

	return 0;

}
*/
//출력 결과
/*
p = 2714761832  *p = 1
p = 2714761836  *p = 2
p = 2714761840  *p = 3
p = 2714761844  *p = 4
p = 2714761848  *p = 5
*/

// p는 주소기 때문에, p++ 을 하게 되면, 배열 arr의 주소가 3000번지 부터라면, 3000번지에서 3004번지로, 3008번지... 이렇게 가게됨
// 3000 -> 3001 -> 3002 ... 이렇게 가지 않음. 

// 만약 int형이 아니라 short 형 같은 2byte 데이터형이였다면, 2씩 증가했을 것임. 

// pointer_array.c

/*
#include <stdio.h>

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int* p = arr;
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("p[%d] = %d\n", i, p[i]);
	}
	return 0;

}
*/
//출력 결과
/*
p[0] = 1
p[1] = 2
p[2] = 3
p[3] = 4
p[4] = 5
*/

// p[i]는 원래 *(p+i) 모양이다. but, 길게 쓰고 싶지 않아서 그냥 p[i]라고 배열처럼 표현.

// 자기가 넘겨받은 주솟값이 배열의 주솟값 일때 만 !! 포인터를 배열처럼 보이게 쓸 수 있음. 

// 그렇다고 해서 포인터 변수가 배열이 되는건 절대 아님 .

// out_parameter.c
/*
#include <stdio.h>

void func(int x, int y, int* psum, int *pproduct);

int main(void)
{
	int sum, product;

	func(123, 456, &sum, &product);

	printf("x + y = %d \n", sum);
	printf("x * y = %d", product);

	return 0;


}

void func(int x, int y, int* psum, int* pproduct)
{
	*psum = x + y;
	*pproduct = x * y;
		

}
*/
//출력 결과
/*
x + y = 579
x * y = 56088
*/


// passing_array.c

#include <stdio.h>

#define SIZE 10

void copy_array(const int* source, int* target, int size);
void print_array(const int* arr, int size);

int main(void)
{
	int x[SIZE] = { 10,20,30,40,50 };
	int y[SIZE] = { 0 };

	printf("x = ");
	print_array(x, SIZE);
	printf("\n");

	copy_array(x, y, SIZE);
	printf("changed y = ");
	print_array(y, SIZE);


	return 0;

}

void copy_array(const int* source, int* target, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		target[i] = source[i];
	}


}

void print_array(const int* arr, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf(" %d", arr[i]);
	}

}

//출력 결과
/*
x =  10 20 30 40 50 0 0 0 0 0
changed y =  10 20 30 40 50 0 0 0 0 0
*/

// 마찬가지로, 포인터 변수이지만, 배열의 주소가 들어가서 출력을 그냥 배열 형태로 했음. 