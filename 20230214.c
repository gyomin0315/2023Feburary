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
	printf("�̵����� :");
	for (i = 0; i < size; i++)
	{
		switch (moves[i])
		{
		case north:
			printf("�� ");
			break;
		case south:
			printf("�� ");
			break;
		case east:
			printf("�� ");
			break;
		case west:
			printf("�� ");
			break;

		}



	}

	return 0;

}

//��� ���
/*
�̵����� :�� �� �� �� �� ��
*/

/*
 enum:����ü. ���ڿ����� �տ������� ������� 0,1,2,3... �� ���� ���ڸ� �迭�����ν�, ���� �� ���ϰ� ���ڿ��� ����� �� �ְ� ��.
	 enum ����ü�� �̸� {���ڿ�1, ���ڿ�2 , ....}; �ڿ� �� �����ݷ� �ٿ���� ��.
	 �̷��� ���ڿ�1 = 0 , ���ڿ�2 = 1,... �̷������� �ڵ� �Ҵ��. (�ʱ�ȭ ���� �ʾ��� ���.)
 
	 enum ����ü���̸� �迭���̸�[] ���� Ư�� ����ü�� �迭ó�� �� �� ����.

	// printf("%d",sizeof(enum direction)); => 4
	// printf("%d", sizeof(moves)); => 24

	����ó��, �׳� enum direction�� int���� �����ϰ� �����ϱ� 4byte�ε�, moves�� �迭����, enum direction�̶�� �޸𸮰� 6�� ���ִ� ����.


	 ��, ����ü ���� ���ڿ����� ���� �������̴ϱ�, switch �� �ȿ� �� �� ����.
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
//��� ���
/*
0 1 2 3
0 0 2 1
0 1 100 99
4 5 -99 -100
*/

// enum�� �ʱ�ȭ. �ʱ�ȭ �����ָ� 0���� �����ؼ� 1�� �þ��, �ʱ�ȭ �߰����� ���ָ� �� �ں��ʹ� �� ���������� +1 ��.
