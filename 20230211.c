// struct.c

/*

구조체란 ? 동일하거나 동일하지 않은 자료형들의 모임.
배열은 동일한 자료형들이 메모리상에 연속적으로 모여있는 반면에, 구조체는 서로 다른 형 or 같은 형이 모여있음. struct도 메모리에 연속적으로 저장됨.
즉, 구조체는 사용자 정의 자료형이라고 할 수 있음.

*/
/*
#include <stdio.h>

struct content {


	char title[40];
	int price;
	double rate;

};

int main(void)
{

	printf("content 구조체의 크기 : %d\n", sizeof(struct content));
	return 0;

}
#pragma pack(show) // 컴파일러의 메모리 정렬 정보를 출력창에 경고로 표시. x64는 16byte, x86은 8byte.
*/
//출력 결과
/*
content 구조체의 크기 : 56 

*/

/*
1byte짜리 40개, 4byte한개, 8byte한개 해서 총 52byte가 나와야 할거같은데 4byte가 더 나왔다.

컴파일러가 선언된 자료형에 대해서 메모리 할당하는 규칙 2가지가 있기 때문.

1. 각각의 변수를 저장하기 위해 기본 4byte단위를 우선 할당한다. char 데이터형 변수를 하나 선언했으면, 일단 4byte를 잡고,
   char형 변수를 2개 선언했으면 그 4byte안에 char형 변수 2개를 넣고 이런 식으로...

2. 구조체 각 멤버중에 가장 큰 멤버의 크기에 영향을 받는다. 즉, 여기서 double 8byte가 있었으니, char형도 8byte 다 잡아서 넣었을 것이고,
   int형도 기본 우선 8byte 잡았을 것임. char는 8 * 5 = 40 해서 다 들어갔는데, int쪽에 4byte가 남음.
   그래서 52 + 4(int쪽에서 빈 byte) = 56byte 됨.

   */

//struct_2.c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct content {

	char title[40];
	int price;
	double rate;


};

int main(void)
{
	struct content c2, c3; // struct content를 c1, c2라는 이름(변수)로 선언. 이 때 , 초기값 : 쓰레기값.
	struct content c1 = { "Avengers",8000,8.8 };

	strcpy(c2.title, "Aquaman");// . 은 "~의"라는 뜻을 가짐. c1.title이면 c1의 title은 ~ 의 뜻.
	c2.price = 7000;
	c2.rate = 7.7;

	strcpy(c3.title, "Batman");
	c3.price = 9000;
	c3.rate = 9.9;

	printf("c1 = 제목 :%s  가격: %d  평점: %.1f\n", c1.title, c1.price, c1.rate);

	printf("c2 = 제목 :%s  가격: %d  평점: %.1f\n", c2.title, c2.price, c2.rate);

	printf("c3 = 제목 :%s  가격: %d  평점: %.1f\n", c3.title, c3.price, c3.rate);

	return 0;

}

//출력 결과
/*
c1 = 제목 :Avengers  가격: 8000  평점: 8.8
c2 = 제목 :Aquaman  가격: 7000  평점: 7.7
c3 = 제목 :Batman  가격: 9000  평점: 9.9
*/