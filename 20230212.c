
// 구조체는 재 정의 할 수 없음. 즉, struct content c1이라고 이름을 붙였다가, 다시 다음 줄에서 struct content c1 = 초기화값... 이런식으로 안되고,
// 초기화를 할 거라면 맨처음에 정의를 해줄때 초기화를 시켜줘야함. 
// 구조체 끝에는 항상 중괄호 뒤에 세미콜론 있어야함 !

/*
#include <stdio.h>

struct content {

	char content[40];
	int price;
	double rate;
};

int main(void)
{
	struct content c1 = { "Avengers",11000,8.8 };
	struct content c2 = c1;
	struct content c3 = { 0 }; // 싹 다 0으로 초기화 해줌.

	c3 = c1;

	printf("c1 = %s %d %.1lf\n",c1.content, c1.price, c1.rate);
	printf("c2 = %s %d %.1lf\n", c2.content, c2.price, c2.rate);
	printf("c3 = %s %d %.1lf\n", c3.content, c3.price, c3.rate);
	

}
*/
//출력 결과
/*
c1 = Avengers 11000 8.8
c2 = Avengers 11000 8.8
c3 = Avengers 11000 8.8
*/

// compare.c
/*
#include <stdio.h>
#include <string.h>

struct content {

	char title[30];
	int price;
	double rate;

};

int main(void)
{
	struct content c1 = { "Avengers",12000,3.3 };
	struct content c2 = c1;

	if (strcmp(c1.title, c2.title) == 0 && c1.price == c2.price && c1.rate == c2.rate)
		printf("c1과 c2는 같다.");
	else
		printf("c1과 c2는 다르다.");


	printf("\n%d", strcmp("A", "a"));


	return 0;


}
*/
//출력 결과
/*
c1과 c2는 같다.
*/

// struct_array.c

#include <stdio.h>
#include <string.h>

struct content {

	char title[40];
	int price;
	double rate;

};

int main(void)
{
	struct content arr[] = {

		{"Avengers,",11000,6.6}, // arr[0]
		{"Aquaman",5500,5.1}, // arr[1]
		{"Shazam",3300,3.4} // arr[2]

	};

	int number = sizeof(arr) / sizeof(arr[0]);


	for (int i = 0; i < number; i++)
	{
		printf("arr[%d] = {%s , %d , %.1lf}\n", i, arr[i].title, arr[i].price, arr[i].rate);


	}

	return 0;

}

//출력 결과
/*
arr[0] = {Avengers, , 11000 , 6.6}
arr[1] = {Aquaman , 5500 , 5.1}
arr[2] = {Shazam , 3300 , 3.4}
*/






