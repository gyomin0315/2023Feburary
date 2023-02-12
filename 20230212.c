
// ����ü�� �� ���� �� �� ����. ��, struct content c1�̶�� �̸��� �ٿ��ٰ�, �ٽ� ���� �ٿ��� struct content c1 = �ʱ�ȭ��... �̷������� �ȵǰ�,
// �ʱ�ȭ�� �� �Ŷ�� ��ó���� ���Ǹ� ���ٶ� �ʱ�ȭ�� ���������. 
// ����ü ������ �׻� �߰�ȣ �ڿ� �����ݷ� �־���� !

/*
#include <stdio.h>

struct content {

	char content[40];
	int price;
	double rate;
};

int main(void)
{
	struct content c1 = { "Avengers",11000,8.8 };
	struct content c2 = c1;
	struct content c3 = { 0 }; // �� �� 0���� �ʱ�ȭ ����.

	c3 = c1;

	printf("c1 = %s %d %.1lf\n",c1.content, c1.price, c1.rate);
	printf("c2 = %s %d %.1lf\n", c2.content, c2.price, c2.rate);
	printf("c3 = %s %d %.1lf\n", c3.content, c3.price, c3.rate);
	

}
*/
//��� ���
/*
c1 = Avengers 11000 8.8
c2 = Avengers 11000 8.8
c3 = Avengers 11000 8.8
*/

// compare.c
/*
#include <stdio.h>
#include <string.h>

struct content {

	char title[30];
	int price;
	double rate;

};

int main(void)
{
	struct content c1 = { "Avengers",12000,3.3 };
	struct content c2 = c1;

	if (strcmp(c1.title, c2.title) == 0 && c1.price == c2.price && c1.rate == c2.rate)
		printf("c1�� c2�� ����.");
	else
		printf("c1�� c2�� �ٸ���.");


	printf("\n%d", strcmp("A", "a"));


	return 0;


}
*/
//��� ���
/*
c1�� c2�� ����.
*/

// struct_array.c

#include <stdio.h>
#include <string.h>

struct content {

	char title[40];
	int price;
	double rate;

};

int main(void)
{
	struct content arr[] = {

		{"Avengers,",11000,6.6}, // arr[0]
		{"Aquaman",5500,5.1}, // arr[1]
		{"Shazam",3300,3.4} // arr[2]

	};

	int number = sizeof(arr) / sizeof(arr[0]);


	for (int i = 0; i < number; i++)
	{
		printf("arr[%d] = {%s , %d , %.1lf}\n", i, arr[i].title, arr[i].price, arr[i].rate);


	}

	return 0;

}

//��� ���
/*
arr[0] = {Avengers, , 11000 , 6.6}
arr[1] = {Aquaman , 5500 , 5.1}
arr[2] = {Shazam , 3300 , 3.4}
*/






