//(12) union.c 메모리를 아껴서 쓰겠다. 공용의 의미 union
#include <stdio.h>
union test {
    int     i;                         
    char    c;
    short   s;
};
int main(void) {
    union test t1 = { 0x12345678 };    

    printf("t1.i의 주소 = %p\n", &t1.i);   
    printf("t1.c의 주소 = %p\n", &t1.c);
    printf("t1.s의 주소 = %p\n", &t1.s);

    printf("sizeof(union test) = %d\n", sizeof(union test));   

    printf("t1.i = %x\n", t1.i);           
    printf("t1.c = %x\n", t1.c);          
    printf("t1.s = %x\n", t1.s);           
    return 0;
}
// 출력 결과 작성
/*
t1.i의 주소 = 000000730536F904
t1.c의 주소 = 000000730536F904
t1.s의 주소 = 000000730536F904
sizeof(union test) = 4
t1.i = 12345678
t1.c = 78
t1.s = 5678

*/

// int형, char형, short형 변수들이 모두 같은 메모리에 있음. 즉, 여기서는 4byte안을 i는 전체를, c는 1/4를, short는 1/2를 쓰게됨. 
// 또, struct와의 차이점은, 같은 메모리를 사용하기 때문에, union을 초기화 하면, 여기서 char, short는 그 초기화값의 부분만 표시하게 됨.

// (13-1) typedef.c
#include <stdio.h>
typedef struct point {      
    int x, y;
} point_t;  // struct를 point_t라는 이름으로 부르겠다는 뜻.
void print_point(const point_t* ptr);   
int main(void) {
    point_t pt1 = { 10, 20 };           
    print_point(&pt1);
    return 0;
}
void print_point(const point_t* ptr) {
    printf("(%d, %d) ", ptr->x, ptr->y);
}
// 출력 결과 작성
/*
(10, 20)
*/