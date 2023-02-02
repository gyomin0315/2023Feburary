/*
#include <stdio.h>

int main(void)
{
	int a = 10;
	int* p = &a; // ������ ���� p�� a�� �ּҷ� �ʱ�ȭ�Ѵ�. p�� a�� ����Ű�� ��. 
	int* b = NULL; // ������ ���� b�� NULL�� �ʱ�ȭ�Ѵ�. �ƹ��͵� ����Ű�� �ʴ´ٴ� ��. NULL�� ��ǻ�� ���忡�� 0�̶�� ����. ��, �ּڰ��� 0�̸�, � ������ ����Ű�� �ʴ´�.
	int* q = 0; // NULL ��� 0�� ���.

	printf("p = %X\n", p);
	printf("p = %u\n", b);
	printf("p = %u\n", q);

	return 0;

}
*/
//��� ���
/*
p = 649065780
p = 0
p = 0
*/
/*
#include <stdio.h>

int main(void)
{
	int a = 10;
	int* p = &a;
	printf("a = %d\n", a);
	printf("&a = %p\n", a);
	printf("p = %p\n", p);
	printf("*p = %d\n", *p);
	printf("&p = %p\n", &p);
	*p = 20;
	printf("a = %d", a);
	return 0;

}
*/
//��� ���
/*
a = 10
&a = 000000000000000A
p = 00000062C3DBFC64
*p = 10
&p = 00000062C3DBFC88
a = 20
*/

// need_pointer.c
/*
#include <stdio.h>
void test1(int x)
{
	x = 20;

}

void test2(int* p)
{
	*p = 20;
}

int main(void)
{
	int x = 10;
	test1(x);
	printf("test1 ���� ���� x���� : %d\n", x);

	test2(&x);
	printf("test2 ���� ���� x���� : %d", x);

	return 0;



}
*/
//��� ���
/*
test1 ���� ���� x���� : 10
test2 ���� ���� x���� : 20
*/

/*

����� ���� �Լ��� �Ű������� ���� ���� �����ؼ� �־��ִ°� Call by Value(���� ���� ȣ��) �̶�� �ϰ�,
�Ű������� ���� �����ؼ� �־��ִµ�, �ּڰ��� �־��ְ� �Ǹ� ,Call by Reference(������ ���� ȣ��) �̶�� �Ѵ�.

��, �� ���α׷����� main�� �ִ� x�� ����� �����Լ� test1�� �ִ� x�� ���� ������ �ٸ� x�� !

*/

// const_pointer.c => ���ȿ��� ���� �� !!!

/*
#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;

	const int* p1 = &a; // p1�� a�� �б� �������� �����Ѵ�. (�б� ���� ������)
	int* const p2 = &a; // p2�� a ���� �������̴�. (Ư�� ������ ���� ������)
	const int* const p3 = &a; // p3�� a�� �б����� ����������, ���� �������̴�.

	printf("*p1 = %d\n", *p1);
	// *p1 = 100; => p1�� �б� ���� �����Ϳ����ϱ�, a�� ������ �� ����.
	p1 = &b;
	printf("*p1 = %d\n", *p1); // �б� ���� �����ʹϱ� �ٸ� �޸𸮸� ������ ���� ����.

	// p2 = &b ; => p2�� a ���� �����Ϳ����ϱ�, �ٸ� �޸� ���� �Ұ�.

	*p2 = 200;

	printf("*p2 = %d\n", *p2); // �޸� ���� �����͸� �ٸ� �޸𸮸� ���� �� ���� ���, �޸��� ���� �ٲܼ��� ����.

	// *p3 = 100;
	// *p3 = &b;
	// => p3�� a�� ���� ����������, �б����� �����Ϳ��� a�� ���� ������ ����, �ٸ� �޸𸮸� ������ ���� ����.

	printf("*p3 = %d\n", *p3);
	return 0;


}
*/
// ��� ���
/*
*p1 = 10
*p1 = 20
*p2 = 200
*p3 = 200
*/

#include <stdio.h>

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int* p = arr;
	int i;

	for (i = 0; i < 5; i++, p++)
	{
		printf("p = %p", p);
		printf("  *p = %d", *p);
		printf("\n");
	}
	return 0;
}

//��� ���
/*
p = 000000C3A51DFB78  *p = 1
p = 000000C3A51DFB7C  *p = 2
p = 000000C3A51DFB80  *p = 3
p = 000000C3A51DFB84  *p = 4
p = 000000C3A51DFB88  *p = 5
*/