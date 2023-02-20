/*
#include <stdio.h>

int main(void)
{
	int m[4] = { 1,2,3,4 };
	for (int i = 0; i < 4; i++)
	{
		printf("%u\n", m + i);
		printf("%d\n", *(m + i));
		printf("%d\n", m[i]);


	}

	return 0;
}
*/
//출력 결과
/*
3252417816
1
1
3252417820
2
2
3252417824
3
3
3252417828
4
4

*/

// 배열명으로 썼던 m = &m[0]임.
/*
#include <stdio.h>

int main(void)
{
	int m[4] = { 1,2,3,4 }, i, * p;
	p = m;
	for (i = 0; i < 4; i++)
		printf("%d ", *(p + i));
	return 0;

}
*/
//출력 결과
/*
1 2 3 4
*/
/*
#include <stdio.h>

int main(void)
{
	int g[2][3] = { {1,2,3},{4,5,6} };
	int i,j;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", g[i][j]);
		}
		printf("\n");
	}


	return 0;

}
*/
//출력 결과
/*
1 2 3
4 5 6

*/

#include <stdio.h>

int main(void)
{
	float k[3][2] = { {170.5,168.3},{172.4,158.2},{180.2,150.3} };
	int i;
	for (i = 0; i < 2; i++)
		printf("k[0][%d] = %f\n", i, k[0][i]);
	for (i = 0; i < 2; i++)
		printf("k[1][%d] = %f\n", i, k[1][i]);
	for (i = 0; i < 2; i++)
		printf("k[2][%d] = %f\n", i, k[2][i]);

	return 0;

}

//출력 결과
/*
k[0][0] = 170.500000
k[0][1] = 168.300003
k[1][0] = 172.399994
k[1][1] = 158.199997
k[2][0] = 180.199997
k[2][1] = 150.300003
*/





