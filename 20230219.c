// �迭 / ������
/*
#include <stdio.h>

int main(void)
{

	int m[4] = { 1,2,3,4 };
	printf("%d %d %d %d", m[0], m[1], m[2], m[3]);
	return 0;


}
*/
//��� ���
/*
1 2 3 4
*/
/*
#include <stdio.h>

int main(void)
{
	char s[5] = { 'a','b','c','d','e' };
	int i,num=0;
	for (i = 0; i < 5; i++)
	{
		if (s[i] == 'd')
			num++;

	}
	printf("num = %d", num);
	return 0;
}
*/
//��� ���
/*
num = 1
*/
/*
#include <stdio.h>
int main(void)
{
	int m[5] = { 4,4,7,2,8 };
	int i,max=0;
	for (i = 0; i < 5; i++)
	{
		if (max < m[i])
			max = m[i];

	}

	printf("max = %d", max);
	return 0;
}
*/
//��� ���
/*
max = 8
*/
/*
#include <stdio.h>

int main(void)
{
	int m, * p;
	m = 125;
	p = &m;
	printf("%d %d %u %u", m, *p, &m, p);
	return 0;

}
*/
//��� ���
/*
125 125 57670244 57670244
*/

// m�� ��Ȯ�ϰ� 4byte����, ������ ���� p�� 4byte or 8byte��. 4byte : ��ǻ�Ͱ� 32bit, 8byte : ��ǻ�Ͱ� 64bit.
// p�� ������ ����, *�� ������ ������.

#include <stdio.h>

int main(void)
{
	int m[4] = { 2,6,8,2 };
	int* p;
	p = m;
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("%u\n", (m+i));
		printf("%d\n", *&m[i]); // �̷��� �ᵵ �ȴ�. (*�� ����Ű�� ���� ���̴ϱ�.)
	}
	return 0;
}

//��� ���
/*
1201339208
2
1201339212
6
1201339216
8
1201339220
2
*/

/*
#include <stdio.h>

int main(void)
{
	int m[4] = { 1,2,3,4 };
	int* p;
	//p = m;
	p = &m[0];

	printf("%u %u %u %u\n", p, p + 1, p + 2, p + 3);
	printf("%u %u %u %u", &m[0], &m[1], &m[2], &m[3]);
	return 0;


}
*/
//��� ���
/*
294647944 294647948 294647952 294647956
294647944 294647948 294647952 294647956
*/

