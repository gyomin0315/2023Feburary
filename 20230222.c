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
//��� ���
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
//��� ���
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
//��� ���
/*
abc
*/

// ���� ������ %s �� �������� �ݵ�� �ڿ� �ּ� ���;���. %s�� ���� �� �ּ��� ���ۺ��� NULL���� ���ڿ��� ����ض� ��� �ǹ�.
/*
#include <stdio.h>

int main(void)
{
	char m[] = { 'a','b','c' };
	printf("%s", m);
	return 0;


}
*/
//��� ���
/*
abc��������������������������������??��
*/

// NULL���� ����ε�, NULL ���Ǹ� ����� �����༭ �� �� �����Ⱚ�� ��� ����. 
/*
#include <stdio.h>

int main(void)
{
	char m[] = "student", * p; // ���ڿ��� ������ �迭�� �ʱⰪ���� ������ �� �� ����. �̶�, NULL�� �ڿ� �ڵ����� ����. �׷��� m[8]��.

	p = m;

	printf("%s, %s , %s", p,p+1,p+2);
	return 0;


}
*/
//��� ���
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
//��� ���
/*
ent
uent
duent
tduent
stduent
*/
