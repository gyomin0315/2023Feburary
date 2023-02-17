
#include <stdio.h>
int get_max(int x, int y, int z) {   

    int max = x > y ? x : y;

    max = z > max ? z : max;

    return max;

}
int main(void) {

    //get_max(10, 20);              // 인자의 개수가 부족하면 컴파일 에러

    //get_max(10, 20, 30, 40);      // 인자의 개수가 많으면 컴파일 경고

    double max;

    max = get_max(12.34, 0.5, 7.9); // 인자를 매개변수의 데이터형으로 형 변환 Call by Valule(값에 의한 호출)

    printf("max = %f\n", max);

    return 0;

}

// 출력 결과 
/*

max = 12.000000

*/
// 자료형 웬만하면 맞아야하고, 갯수, 순서는 매우 중요. 

// (05-1) max.c

#include <stdio.h>

int get_max(int x, int y, int z);

int main(void) {

    //get_max(10, 20);              // 인자의 개수가 부족하면 컴파일 에러

    //get_max(10, 20, 30, 40);      // 인자의 개수가 많으면 컴파일 경고

    double max;

    max = get_max(12.34, 0.5, 7.9); // 인자를 매개변수의 데이터형으로 형 변환 Call by Valule(값에 의한 호출)

    printf("max = %f\n", max);

    //get_ma(1, 2, 3);              // 잘못된 이름으로 호출하면 링크 에러

    return 0;

}

int get_max(int x, int y, int z) {   // 매개변수가 3개인 함수

    int max = x > y ? x : y;

    max = z > max ? z : max;

    return max;

}




