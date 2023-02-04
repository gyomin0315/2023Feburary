/*
배열의 개념

- 배열(array)은 같은 데이터형의 변수를 메모리에 연속적으로 할당하고 같은 이름으로 사용하는 기능이다.
연속적으로 할당이 핵심.

- 배열의 각 원소들은 변수처럼 사용할 수 있음.변수처럼 연산도 가능.

- sizeof(arr) / sizeof(arr[0]) 의 방법으로 원소의 갯수를 얻을 수 있다.

- 배열의 크기가 5인데, arr[5] 와 같이 읽어보거나, (이때는 당연히 쓰레기값 나옴.) arr[5]를 초기화 해주면 안됨.(이때는 실행 에러 뜸.)

포인터의 개념

- 포인터 : 주소를 저장하는 변수

- 포인터는 다른 변수를 가리킨다. (주소값 자체는 중요하지 않고, 어떤 변수를 가리키고 있는지가 중요 !)

배열처럼 사용되는 포인터.

- 배열을 가리키는 포인터는 배열처럼 사용 할 수 있다.이때, p[i] = *(p + i);이다.

- 배열 이름은 상수이고, 포인터는 변수기 때문에, 둘이 같은건 아님.

*/

// char_array.c

/*
#include <stdio.h>

int main(void)
{
	char str1[10] = "abc" ; // 문자 배열을 문자열로 초기화 해줌..
	// char str2[10] = "Very long string" ; // 선언한 사이즈보다 더 큰 문자열을 할당 했을 때. 얘 처음부터 오류 남.
	char str3[] = "abc"; // 자동으로 str3의 크기는 NULL포함 4byte가 됨.
	char str4[10] = ""; // 전부 NULL로 초기화

	int i;

	str1[0] = 'A';
	printf("str1 = ");
	for (i = 0; str1[i] != '\0'; i++) // NULL문자 표기 할때 반드시 작은따옴표 붙여서 '\0' 과 같이 해줘야함 .
	{
		printf("%c", str1[i]);
	}
	printf("\n");

	// printf("str2 = %s\n", str2); // 형식 지정자 %s는 반드시 뒤에 주솟값 써줘야하는거 잊지 말기.

	printf(str3);

	printf("\n");

	printf("str4 = %s", str4);

	return 0;
}
*/
//출력 결과
/*
str1 = Abc
abc
str4 =
*/

// strlen.c

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[10] = "hello";
	int len = 0;

	printf("str의 길이는 : %d\n", strlen(str));
	printf("\"GOOD BYE\"의 길이는 : %d\n", strlen("GOOD BYE"));

	printf("str = %s\n", str);
	len = strlen(str);

	if (len > 0)
	{
		str[len - 1] = '\0';

	}
	printf("str = %s", str);

	return 0;


}

//출력 결과
/*
str의 길이는 : 5
"GOOD BYE"의 길이는 : 8
str = hello
str = hell
*/