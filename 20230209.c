//input_string.c
/*
#define _CRT_SECURE_NO_WARNINGS // Visual Studio 2019에서 sscanf, sprintf 사용 시 필요
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str_in[128] = "";
	char str_out[128] = "";

	int year, month, day;

	printf("yyyymmdd?");
	gets_s(str_in, sizeof(str_in));

	//gets(str_in);

	// 입력받은 문자열을 year,month,day에 나누어 저장한다. sscanf사용.

	sscanf(str_in, "%4d%2d%2d", &year, &month, &day);

	// year, month, day에 나누어져 있던걸 다시 sprintf를 써서 한 곳에 모은다.

	sprintf(str_out, "Due Date: %04d-%02d-%02d", year, month, day);

	puts(str_out);

	//puts(str_out);

	return 0;

}
*/
//출력 결과
/*
yyyymmdd?20230209
Due Date : 2023 - 02 - 09
*/

// gets_s (scan한 문자열을 저장할 주소 , 그 주소의 크기(사이즈)) => scanf처럼 문자열을 받아오는 함수. 문자열을 받아와서 써준 주소에 저장한다.
// sscanf => 하나의 기억장소에 있는 문자열을 여러개의 기억장소에 나누어 저장한다.
// sscanf(자를 문자열이 들어있는 주소1, "어떤식으로 자를건지? 형식지정자로 나눠줌.ex)%4d,%2d",자른 문자열들을 저장할 주소들. &year,&day..)
// sprintf => 잘려진 문자열들을 다시 하나의 기억장소에 넣어줌.
// sprintf(잘려진 문자열들을 넣을 기억장소 주소1,"어떤식으로 넣을건지.",잘린 문자열들이 있는 주소들 주소2,주소3...)
// puts는 printf랑 똑같은데, puts는 문자열밖에 출력 못해줌. puts(주소1)

// gets_s와 scanf의 차이는 gets_s는 문자열 사이에 공백이 있을수 있다는거임. 

// gets_s가 아니라 gets만 쓰게 되면 길이는 신경 안쓰고 그냥 gets(주소1) 써서 주소1에 문자열 그대로 넣을 수 있음.

// 또, puts(주소1)은 한줄의 문자열 출력임. \n을 쓰지 않아도, puts 2개 연달아 쓰면 다음줄에 출력되는거 확인 할 수 있음.


// pointer.c
#include <stdio.h>
#include <string.h>
#include <ctype.h> // 문자 처리 라이브러리 사용 시 필요

int main(void)
{
	char str[64] = "this is test string for char pointer.";
	char* p = str;

	while (1)
	{
		if (islower(*p))
			*p = toupper(*p);

		p = strchr(p, ' ');
		if (p == NULL)
			break;
		p++; // p가 공백 다음문자를 가리키게 해야 함. 


	}
	
	puts(str);

	return 0;



}

//출력 결과
/*
This Is Test String For Char Pointer.
*/

/*
 *p대신 p[0]를 써도 됨. 

int islower(int a) => a (ASCII 코드임 !) 가 소문자인지 확인해줌..소문자인 경우에만 1반환.
 int toupper(int a) ==> a를 대문자로 바꿔준다.

그 외에도

int isalpha(int a) => a가 알파벳인지 아닌지 구분해줌. 영문 대문자면 1, 소문자면 2, 영문자 아니면 0 반환.
int isupper (int a) => a가 대문자인지 아닌지 구별. 대문자인경우에만 1 반환.
int isdigit(int a) => a가 숫자인지 아닌지 구별. 이떄 주의할 점은 is종류 함수는 무조건 ASCII코드를 참조한다.
					  즉, isdigit(3)이라던가, int a = 15, isdigit(a) 같은 경우, ASCII코드의 0 ~ 9, 즉, 48번부터 57번까지에 들어가지 않기 때문에,
					  숫자가 아니라고 판단한다. 숫자라고 판단하게 하려면 isdigit('3')과 같이 써줘야함. 
*/