/*
#include <stdio.h>
int main(void) {
    int a = 10;
    int* p = &a;      
    int* q = NULL;   // NULL로 초기화하면, 어떤 변수도 가리키지 않는다는 뜻이다. NULL은 컴퓨터 입장에서 0이라고생각. 0이라는 주소값이면, 어떤 변수도 가리키지 않는다는 뜻.
    int* r = 0;        // NULL 대신 0을 사용할 수 있다.

    printf("p = %p\n", p);  
    printf("q = %p\n", q);
    printf("r = %p\n", r);
    return 0;
}
*/
// 출력 결과
/*
p = 000000DDAA4FFA04
q = 0000000000000000
r = 0000000000000000

*/

// 어떤 변수도 가리키지 않는다는 의미는 어떤 주솟값도 가리키지 않는다는 뜻.
/*

#include <stdio.h>
int main(void) {
    int a = 10;
    int* p = &a;      
    int* q = NULL;   
    int* r = 0;       

    printf("p = %d\n", p); 
    printf("q = %d\n", q);
    printf("r = %d\n", r);
    return 0;
}
*/
// 출력 결과 
/*
p = 1029044116
q = 0
r = 0

*/



#include <stdio.h>
int main(void) {
    int a = 10;
    int* p = &a;                    
    printf(" a = %d\n", a);  

    printf("&a = %p\n", &a);  

    printf(" p = %p\n", p);  

    printf("*p = %d\n", *p);  

    printf("&p = %p\n", &p);   

    *p = 20;                        
    printf("*p = %d\n", *p);      
    return 0;
}
// 출력 결과 
/*
 a = 10
&a = 000000292550FBE4
 p = 000000292550FBE4
*p = 10
&p = 000000292550FC08
*p = 20

*/