/*
#include <stdio.h>

int main(void)
{
	int a = 10;
	int* p = &a; // 포인터 변수 p를 a의 주소로 초기화한다. p는 a를 가리키게 됨. 
	int* b = NULL; // 포인터 변수 b를 NULL로 초기화한다. 아무것도 가리키지 않는다는 뜻. NULL은 컴퓨터 입장에서 0이라고 생각. 즉, 주솟값이 0이면, 어떤 변수도 가리키지 않는다.
	int* q = 0; // NULL 대신 0을 사용.

	printf("p = %X\n", p);
	printf("p = %u\n", b);
	printf("p = %u\n", q);

	return 0;

}
*/
//출력 결과
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
//출력 결과
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
	printf("test1 실행 후의 x값은 : %d\n", x);

	test2(&x);
	printf("test2 실행 후의 x값은 : %d", x);

	return 0;



}
*/
//출력 결과
/*
test1 실행 후의 x값은 : 10
test2 실행 후의 x값은 : 20
*/

/*

사용자 정의 함수의 매개변수에 값을 직접 지정해서 넣어주는걸 Call by Value(값에 의한 호출) 이라고 하고,
매개변수에 값을 지정해서 넣어주는데, 주솟값을 넣어주게 되면 ,Call by Reference(참조에 의한 호출) 이라고 한다.

또, 위 프로그램에서 main에 있는 x와 사용자 정의함수 test1에 있는 x는 서로 완전히 다른 x임 !

*/

// const_pointer.c => 보안에서 많이 씀 !!!

/*
#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;

	const int* p1 = &a; // p1은 a에 읽기 전용으로 접근한다. (읽기 전용 포인터)
	int* const p2 = &a; // p2는 a 전용 포인터이다. (특정 변수의 전용 포인터)
	const int* const p3 = &a; // p3는 a의 읽기전용 포인터이자, 전용 포인터이다.

	printf("*p1 = %d\n", *p1);
	// *p1 = 100; => p1은 읽기 전용 포인터였으니까, a를 수정할 수 없음.
	p1 = &b;
	printf("*p1 = %d\n", *p1); // 읽기 전용 포인터니까 다른 메모리를 참조할 수는 있음.

	// p2 = &b ; => p2는 a 전용 포인터였으니까, 다른 메모리 참조 불가.

	*p2 = 200;

	printf("*p2 = %d\n", *p2); // 메모리 전용 포인터면 다른 메모리를 참조 할 수는 없어도, 메모리의 값을 바꿀수는 있음.

	// *p3 = 100;
	// *p3 = &b;
	// => p3는 a의 전용 포인터이자, 읽기전용 포인터여서 a의 값을 수정할 수도, 다른 메모리르 참조할 수도 없다.

	printf("*p3 = %d\n", *p3);
	return 0;


}
*/
// 출력 결과
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

//출력 결과
/*
p = 000000C3A51DFB78  *p = 1
p = 000000C3A51DFB7C  *p = 2
p = 000000C3A51DFB80  *p = 3
p = 000000C3A51DFB84  *p = 4
p = 000000C3A51DFB88  *p = 5
*/