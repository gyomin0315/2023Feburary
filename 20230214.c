//enum.c

#include <stdio.h>
enum direction {
	north, east, south, west
};

int main(void)
{


	enum direction moves[] = {
		north, south, west, west, east, north
	};

	int size = sizeof(moves) / sizeof(moves[0]);

	// printf("%d",sizeof(enum direction)); => 4
	// printf("%d", sizeof(moves)); => 24
	int i;
	printf("이동순서 :");
	for (i = 0; i < size; i++)
	{
		switch (moves[i])
		{
		case north:
			printf("북 ");
			break;
		case south:
			printf("남 ");
			break;
		case east:
			printf("동 ");
			break;
		case west:
			printf("서 ");
			break;

		}



	}

	return 0;

}

//출력 결과
/*
이동순서 :북 남 서 서 동 북
*/

/*
 enum:열거체. 문자열들을 앞에서부터 순서대로 0,1,2,3... 과 같은 숫자를 배열함으로써, 조금 더 편하게 문자열을 사용할 수 있게 함.
	 enum 열거체의 이름 {문자열1, 문자열2 , ....}; 뒤에 꼭 세미콜론 붙여줘야 함.
	 이러면 문자열1 = 0 , 문자열2 = 1,... 이런식으로 자동 할당됨. (초기화 하지 않았을 경우.)
 
	 enum 열거체의이름 배열의이름[] 으로 특정 열거체를 배열처럼 쓸 수 있음.

	// printf("%d",sizeof(enum direction)); => 4
	// printf("%d", sizeof(moves)); => 24

	여기처럼, 그냥 enum direction은 int형을 저장하고 있으니까 4byte인데, moves의 배열에는, enum direction이라는 메모리가 6개 들어가있는 거임.


	 또, 열거체 안의 문자열들은 전부 정수형이니까, switch 문 안에 쓸 수 있음.
*/

// enum2.c
/*
#include <stdio.h>

enum direction {north, south, west, east};

enum direction1 {north1, south1=0,east1,west1};

enum direction2 {north2, south2, east2=99,west2};

enum direction3 {north3 = 4, south3,east3=-100,west3};

int main(void)
{
	printf("%d %d %d %d\n", north, south, west, east);
	printf("%d %d %d %d\n", north1, south1, west1, east1);
	printf("%d %d %d %d\n", north2, south2, west2, east2);
	printf("%d %d %d %d", north3, south3, west3, east3);

	return 0;
}
*/
//출력 결과
/*
0 1 2 3
0 0 2 1
0 1 100 99
4 5 -99 -100
*/

// enum의 초기화. 초기화 안해주면 0부터 시작해서 1씩 늘어나고, 초기화 중간에라도 해주면 그 뒤부터는 그 값에서부터 +1 됨.
