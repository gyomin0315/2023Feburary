// sscanf에서는, 한 주소의 있던 문자열을 여러개의 주소에다 나누어 저장해야 하니까, 뒤에 주솟값이 나오는데,
// sprintf에서는 여러개의 문자열을 한 주소에 합쳐놓는거니까 뒤에 주솟값이 아닌, 변수 name이 온다.

// 내가 만든 문장 직접 입력으로 만들고, 띄어쓰기를 중심으로 대문자로 만드는 프로그램. 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <string.h>

int main(void)
{

	char word[128] ;
	char sentence[1024]="";
	char* p;
	p = sentence;

	while(1)
	{
		
		printf("문자를 입력하시오:");
		scanf("%s", word);

		strcat(sentence, word);
		strcat(sentence, " ");

		if (*word == '.') // 여기서 그냥 word라고 써버리면 이 값은 주소임에 유의 ! strcmp를 쓰거나, 포인터를 써서 비교해줘야함. 
			break;

	} 
	printf("%s", sentence);

	while (1)
	{
		if (islower(*p))
			*p = toupper(*p);

		p = strchr(p, ' ');
		if (p == NULL)
			break;

		p++;
	}

	puts(sentence);
	return 0;

}

//출력 결과
/*
문자를 입력하시오:my
문자를 입력하시오:name
문자를 입력하시오:
is
문자를 입력하시오:gyomin
문자를 입력하시오:.
my name is gyomin . My Name Is Gyomin .

*/

// const_pointer.c
/*
#include <stdio.h>
#include <string.h>            
#include <ctype.h>   // 문자 처리 라이브러리 사용 시 필요.

int count_space(const char* s) // s는 입력 매개변수, const붙었으니까 변하지 않음. 
{
	int count = 0;
	while (s[0] != NULL)
	{
		if (isspace(s[0])) // *s가 가리키는 값이 공백문자인지 검사한다.
			count++;

		s++; // s가 다음 문자를 가리키게 함. 

	}

	return count;



}

int main(void)
{
	char str[64] = "this program \ttests const pointer to string.\n";

	puts(str);
	printf("공백 문자의 갯수 : %d", count_space(str));
	return 0;



}
*/
//출력 결과
/*
this program    tests const pointer to string.

공백 문자의 갯수 : 8
*/

