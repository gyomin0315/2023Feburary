/*
#include <stdio.h>

int main(void)
{
	char m[][4] = { "abc","def" }, * p; // 2�� 4���̴�. �迭�� �ุ ���� ����. 

	p = m;
	printf("%s %s", p, p + 4);
	return 0;

}
*/
//��� ���
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
//��� ���
/*
abcdef
*/

// ������ ������ �ٷ� ���ڿ��� ���� �� �� ����. �� ���ڿ��� �ٸ� �޸𸮿� �˾Ƽ� �ڵ����� ����.
// ������ �������� �� ���ڿ��� �ּҰ� ��. 
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
//��� ���
/*
abc def
abc bc c
def ef f
*/

// ������ ������ �迭�� ��������.
/*
#include <stdio.h>

int main(void)
{
	char *m[] = { "abc","def"};

	printf("%s %s", *m+1, *(m + 1)+1);

	return 0;



}
*/
//��� ���
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

//��� ���
/*
kor
*/