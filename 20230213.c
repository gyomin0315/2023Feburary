// struct_pointer.c
/*
#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>

struct movie {

	char title[40];
	int price;
	double rate;

};

int main(void)
{
	struct movie c1 = { "Avengers",8000,5.1 };
	struct movie* p = &c1;

	p->price *= 0.8;
	p->rate = 9.8;
	strcat(p->title, ":Endgame");

	printf("title : %s, price : %d, rate : %.1lf\n", p->title, p->price, p->rate);
	printf("title : %s, price : %d, rate : %.1lf", (*p).title, (*p).price, (*p).rate);

	return 0;

}
*/

//출력 결과
/*
title : Avengers:Endgame, price : 6400, rate : 9.8
title : Avengers:Endgame, price : 6400, rate : 9.8
*/

/*
struct struct의 이름 *p = &c1 와 같은 형태로 구조체를 가리키는 포인터를 선언할 수 있다.
또, p->title 과 같은 형태는 (* p).price ( = > p가 가리키는 값의 price라는 뜻) 과 같다.
*/

#include <stdio.h>



void func1(struct MAN struct1);
void func2(struct MAN* p);

struct MAN {

	char name[20];
	char nickname;
	int age;


};

int main(void)
{
	struct MAN me = { "GyoMin",'K',25 };
	func1(me);
	func2(&me);
	return 0;



}

void func1(struct MAN struct1)
{
	printf("name : %s, nickname : %c, age : %d\n", struct1.name, struct1.nickname, struct1.age);


}

void func2(struct MAN* p)
{
	printf("name : %s, nickname: %c, age:%d", p->name, p->nickname, p->age);


}
//출력 결과
/*
name : GyoMin, nickname : K, age : 25
name : GyoMin, nickname: K, age:25
*/

// func1보다 func2가 더 메모리 효율적임. func1은 struct1이라는 메모리를 다시 잡았었는데, func2는 포인터를 이용해서 그대로 추가 메모리 선언 없이 print 할수 있었음.








