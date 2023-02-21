/*
#include <stdio.h>
int main(void) {
	int k[2][3] = { {2, 4, 6}, {8, 10, 12} };
	int i;
	printf("%d %d %d\n", *(k[0] + 2), *(k[1] - 1), k[0][2]);
	printf("%d %d\n", *(k[0] + 4), *(k[1] + 1));
	for (i = 0; i <= 2; i++) printf("k[0][%d]=%d\n", i, *(k[0] + i));

	for (i = 0; i <= 2; i++) printf("k[1][%d]=%d\n", i, *(k[1] + i));

	return 0;

}
*/
// 출력 결과
/*
6 6 6
10 10
k[0][0]=2
k[0][1]=4
k[0][2]=6
k[1][0]=8
k[1][1]=10
k[1][2]=12
*/

// 지역 변수는 초기화 하지 않으면 쓰레기값, 전역 변수는 초기화 안하면 0임. 지역변수는 스택영역, 전역 변수는 데이터영역.
/*
#include <stdio.h>
int main(void) {
	int m[2][3] = { {10, 20, 30}, {100, 200, 300} }; // 컴퓨터 입장에서는 1차원 배열로 생각. 이 하나의 1차원 배열을 2행이니까 절반 잘라서 각각 3열이 있다고 생각.
	int i, j;
	for (i = 0; i <= 1; i++)
		for (j = 0; j <= 2; j++)
			printf("m[%d][%d]=%d \n", i, j, *(m[i] + j));
	return 0;
}
*/
// 출력 결과
/*
m[0][0]=10
m[0][1]=20
m[0][2]=30
m[1][0]=100
m[1][1]=200
m[1][2]=300
*/

#include <stdio.h>
int main(void) {
	int k[3][3] = { {1, 4, 7}, {2, 5, 8}, {3, 6, 9} };
	int i, j, hap = 0;
	for (i = 0; i <= 2; i++)
		for (j = 0; j <= 2; j++) hap += *(k[i] + j); 
			printf("Total=%d\n", hap);
	return 0;
}
// 출력 결과
/*
Total=45

*/


