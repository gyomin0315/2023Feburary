/*
#include <stdio.h>
int main(void) {
    int a = 10;
    int* p = &a;      
    int* q = NULL;   // NULL�� �ʱ�ȭ�ϸ�, � ������ ����Ű�� �ʴ´ٴ� ���̴�. NULL�� ��ǻ�� ���忡�� 0�̶�����. 0�̶�� �ּҰ��̸�, � ������ ����Ű�� �ʴ´ٴ� ��.
    int* r = 0;        // NULL ��� 0�� ����� �� �ִ�.

    printf("p = %p\n", p);  
    printf("q = %p\n", q);
    printf("r = %p\n", r);
    return 0;
}
*/
// ��� ���
/*
p = 000000DDAA4FFA04
q = 0000000000000000
r = 0000000000000000

*/

// � ������ ����Ű�� �ʴ´ٴ� �ǹ̴� � �ּڰ��� ����Ű�� �ʴ´ٴ� ��.
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
// ��� ��� 
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
// ��� ��� 
/*
 a = 10
&a = 000000292550FBE4
 p = 000000292550FBE4
*p = 10
&p = 000000292550FC08
*p = 20

*/