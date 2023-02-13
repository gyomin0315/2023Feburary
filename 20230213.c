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

//��� ���
/*
title : Avengers:Endgame, price : 6400, rate : 9.8
title : Avengers:Endgame, price : 6400, rate : 9.8
*/

/*
struct struct�� �̸� *p = &c1 �� ���� ���·� ����ü�� ����Ű�� �����͸� ������ �� �ִ�.
��, p->title �� ���� ���´� (* p).price ( = > p�� ����Ű�� ���� price��� ��) �� ����.
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
//��� ���
/*
name : GyoMin, nickname : K, age : 25
name : GyoMin, nickname: K, age:25
*/

// func1���� func2�� �� �޸� ȿ������. func1�� struct1�̶�� �޸𸮸� �ٽ� ��Ҿ��µ�, func2�� �����͸� �̿��ؼ� �״�� �߰� �޸� ���� ���� print �Ҽ� �־���.








