// find.c
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char filename[] = "readme.txt";
	char* p = NULL;

	p = strchr(filename, '.');

	if (p != NULL)
	{
		printf("파일의 extension은 : %s\n", p + 1);
	}

	p = strstr(filename, ".txt");

	if (p != NULL)
	{
		printf("filetype : text");
	}

	return 0;
}
*/
//출력 결과
/*
파일의 extension은 : txt
filetype : text
*/

//  strchr(주소1, 문자1) => 주소1에 있는 문자열에서 문자1이 있는지 보고, 문자1이 있으면 그 문자1의 주소를 반환.

// strstr(주소1, 문자열1) => 주소1에 있는 문자열에서 문자열1을 찾고, 있으면 그 문자열1의 주소를 반환.

// token.c


#define _CRT_SECURE_NO_WARNINGS     //strtok 사용 시 필요
#include <stdio.h>
#include <string.h>

int main(void)
{

	char phone[] = "010-1234-5678";
	char* p = NULL;

	p = strtok(phone, "-");
	
	printf("mobile : %s\n", p);

	// printf("%s\n", phone); => 010나옴.

	p = strtok(NULL, "-"); 

	printf("prefix : %s\n", p);

	p = strtok(NULL, "-");

	printf("line no : % s\n", p);

	return 0;

}

//출력 결과
/*
mobile : 010
prefix : 1234
line no : 5678
*/

/*
strtok(주소1,문자열1) : 주소1의 문자열을 문자열1을 기준으로 앞에서부터 자른다. 
맨 처음 strtok 함수를 썼을 때만, 주소1을 넣어주고, 그 다음부터는 NULL을 넣어준다.
=> i) 처음에 strtok함수를 써서 구분자를 찾았으면, 그 구분자를 대신해서 NULL을 넣어주게 된다.
   ii) 그러면 phone이 010NULL1234-5678이 될것임.
   iii) strtok(NULL,"-") 를 하게 되면, 이전에 구분자를 찾았던 곳에서 NULL부터 시작해서 "-"를 찾으라는게 됨.
   iv) 그러면 1234를 내보내고, 그 다음 -를 NULL로 바꿔주게 됨.
   v) phone은 010NULL1234NULL5678이 됨. 

   i)가 중요 사항 !
*/

