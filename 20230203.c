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
//��� ���
/*
p = 2714761832  *p = 1
p = 2714761836  *p = 2
p = 2714761840  *p = 3
p = 2714761844  *p = 4
p = 2714761848  *p = 5
*/

// p�� �ּұ� ������, p++ �� �ϰ� �Ǹ�, �迭 arr�� �ּҰ� 3000���� ���Ͷ��, 3000�������� 3004������, 3008����... �̷��� ���Ե�
// 3000 -> 3001 -> 3002 ... �̷��� ���� ����. 

// ���� int���� �ƴ϶� short �� ���� 2byte ���������̿��ٸ�, 2�� �������� ����. 

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
//��� ���
/*
p[0] = 1
p[1] = 2
p[2] = 3
p[3] = 4
p[4] = 5
*/

// p[i]�� ���� *(p+i) ����̴�. but, ��� ���� ���� �ʾƼ� �׳� p[i]��� �迭ó�� ǥ��.

// �ڱⰡ �Ѱܹ��� �ּڰ��� �迭�� �ּڰ� �϶� �� !! �����͸� �迭ó�� ���̰� �� �� ����. 

// �׷��ٰ� �ؼ� ������ ������ �迭�� �Ǵ°� ���� �ƴ� .

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
//��� ���
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

//��� ���
/*
x =  10 20 30 40 50 0 0 0 0 0
changed y =  10 20 30 40 50 0 0 0 0 0
*/

// ����������, ������ ����������, �迭�� �ּҰ� ���� ����� �׳� �迭 ���·� ����. 