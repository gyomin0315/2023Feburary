/*
#include <stdio.h>

int main(void)
{
	int m[2][3] = { {1,2,3},{4,5,6} };

	int i, * mp;
	//mp = m[0];
	mp = m;
	//mp = m + 1;
	for (i = 0; i < 6; i++)
	{
		printf("%d\n", *(mp + i));
	}

	return 0;


}
*/
//출력 결과
/*
1
2
3
4
5
6
*/

/*
#include <stdio.h>

int main(void)
{
	int m[2][3] = { {1,2,3},{4,5,6} };
	int i, * p;
	p = m[0];
	for (i = 0; i < 6; i++)
	{
		printf("%u\n", (p + i)); 
	}
	return 0;

}
*/
//출력 결과
/*
1765538680
1765538684
1765538688
1765538692
1765538696
1765538700
*/
/*
#include <stdio.h>

int main(void)
{
	char m[] = { 'a','b','c','\0' };
	printf("%s", m); 
	return 0;


}
*/
//출력 결과
/*
abc
*/

// 형식 지정자 %s 를 썼을때는 반드시 뒤에 주소 나와야함. %s의 뜻은 이 주소의 시작부터 NULL까지 문자열을 출력해라 라는 의미.
/*
#include <stdio.h>

int main(void)
{
	char m[] = { 'a','b','c' };
	printf("%s", m);
	return 0;


}
*/
//출력 결과
/*
abc儆儆儆儆儆儆儆儆儆儆儆儆儆儆儆儆??껢
*/

// NULL까지 출력인데, NULL 정의를 제대로 안해줘서 그 뒤 쓰레기값이 계속 나옴. 
/*
#include <stdio.h>

int main(void)
{
	char m[] = "student", * p; // 문자열을 문자형 배열에 초기값으로 선언해 줄 수 있음. 이때, NULL은 뒤에 자동으로 붙음. 그래서 m[8]임.

	p = m;

	printf("%s, %s , %s", p,p+1,p+2);
	return 0;


}
*/
//출력 결과
/*
student, tudent , udent
*/

#include <stdio.h>
int main(void)
{
	char m[] = "stduent", * p;
	p = m;
	/*
	p=m+4;
	for(i=0;i<=4;i++) printf("%s\n",p-i);	
	*/
	for (int i = 4; i >= 0; i--)
	{
		printf("%s\n", p + i);
	}
	return 0;


}
//출력 결과
/*
ent
uent
duent
tduent
stduent
*/
