/*
#include <stdio.h>
void test1(int x) { 
    x = 20;         
}                     
void test2(int* p) { 
    *p = 20;        
}
int main(void) {
    int x = 10;
    test1(x);       
    printf("test1 호출 후 x = %d\n", x);  
    test2(&x);     
    printf("test2 호출 후 x = %d\n", x);  
    return 0;
}
*/
// 출력 결과 
/*
test1 호출 후 x = 10
test2 호출 후 x = 20

*/


/*
#include <stdio.h>
void test1(int x);
void test2(int* p);
int main(void) {
    int x = 10;
    test1(x);     
    printf("test1 호출 후 x = %d\n", x); 
    test2(&x);     
    printf("test2 호출 후 x = %d\n", x);  
    return 0;
}
void test1(int x)
{
    x = 20;
}
void test2(int* p)
{
    *p = 20;
}
*/
// 출력 결과 
/*
test1 호출 후 x = 10
test2 호출 후 x = 20

*/



//const_pointer.c
/*
#include <stdio.h>
int main(void) {
    int a = 10, b = 20;
    const int* p1 = &a;        
    int* const p2 = &a;        
    const int* const p3 = &a;  

    printf("*p1 = %d\n", *p1);  

    //*p1 = 100;                
    p1 = &b;                  
    printf("*p1 = %d\n", *p1); 

    //p2 = &b;                  
    *p2 = 100;          
    printf("*p2 = %d\n", *p2);

    //*p3 = 100;                
    //p3 = &b;                  
    printf("*p3 = %d\n", *p3);  
    return 0;
}
*/
// 출력 결과 
/*
*p1 = 10
*p1 = 20
*p2 = 100
*p3 = 100

*/

