/*
#include <stdio.h>

int main(void)
{
	char m[][4] = { "abc","def" }, * p; // 2행 4열이다. 배열은 행만 생략 가능. 

	p = m;
	printf("%s %s", p, p + 4);
	return 0;

}
*/
//출력 결과
/*
abc def
*/
/*
#include <stdio.h>

int main(void)
{
	char* p = "abc";
	printf("%s", p);
	p = "def";
	printf("%s", p);
	return 0;


}
*/
//출력 결과
/*
abcdef
*/

// 포인터 변수에 바로 문자열을 넣을 수 도 있음. 이 문자열은 다른 메모리에 알아서 자동으로 잡힘.
// 포인터 변수에는 이 문자열의 주소가 들어감. 
/*
#include <stdio.h>

int main(void)
{
	char* m[2] = { "abc","def" };
	printf("%s %s\n", m[0], m[1]);
	printf("%s %s %s\n", m[0], m[0] + 1, m[0] + 2);
	printf("%s %s %s", m[1], m[1] + 1, m[1] + 2);

	return 0;

}
*/
//출력 결과
/*
abc def
abc bc c
def ef f
*/

// 포인터 변수를 배열로 선언했음.
/*
#include <stdio.h>

int main(void)
{
	char *m[] = { "abc","def"};

	printf("%s %s", *m+1, *(m + 1)+1);

	return 0;



}
*/
//출력 결과
/*
bc ef
*/

// (22)

#include <stdio.h>

int main(void)
{
	char* m = "kor";
	int i;
	for (i = 0; i <= 2; i++)
		printf("%c", m[i]);
	return 0;

}

// m[i] = *(m+i)

//출력 결과
/*
kor
*/