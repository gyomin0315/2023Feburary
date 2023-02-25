// init_array.c
/*
#include <stdio.h>
#define ARR_SIZE 5      
int main(void) {
    int arr[ARR_SIZE] = { 1, 2, 3, 4, 5 };  
    int x[ARR_SIZE] = { 1, 2, 3 };          
    int y[ARR_SIZE] = { 0 };   
    int z[] = { -1, 0, 1 };     
    int i, size;


    printf("arr = ");

    for (i = 0; i < ARR_SIZE; i++)
        printf("%3d ", arr[i]);

    printf("\n");

    printf("x   = ");

    for (i = 0; i < ARR_SIZE; i++)
        printf("%3d ", x[i]);
    printf("\n");

    printf("y   = ");
    for (i = 0; i < ARR_SIZE; i++)
        printf("%3d ", y[i]);
    printf("\n");

    printf("z   = ");
    size = sizeof(z) / sizeof(z[0]);   
    for (i = 0; i < size; i++)
        printf("%3d ", z[i]);

    printf("\n");
    return 0;
}
*/
// 출력 결과
/*
arr =   1   2   3   4   5
x   =   1   2   3   0   0 
y   =   0   0   0   0   0 
z   =  -1   0   1

*/

// using_array.c
#include <stdio.h>
#define ARR_SIZE 5
unsigned int absolute(int x) {  
    return x > 0 ? x : -x;
}
int main(void) {
    int x[ARR_SIZE] = { -4, 0, 28, 3, -12 };
    unsigned int y[ARR_SIZE] = { 0 };   
    int i;
    for (i = 0; i < ARR_SIZE; i++)
        y[i] = absolute(x[i]); 
    
    for (i = 0; i < ARR_SIZE; i++)
        printf("%d ", y[i]);    
    printf("\n");
    return 0;
}
// 출력 결과 작성
/*
4 0 28 3 12

*/