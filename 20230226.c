// 2d_array.c
/*
#include <stdio.h>
#define ROW 3 
#define COL 2
int main(void) {
    int data[ROW][COL];

    int i, j, k;

    for (i = 0, k = 0; i < ROW; i++)    
        for (j = 0; j < COL; j++)      
            data[i][j] = ++k;   

    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++)
            printf("%3d ", data[i][j]);
        printf("\n");
    }
    printf("sizeof(data)       = %d\n", sizeof(data));

    printf("sizeof(data[0])    = %d\n", sizeof(data[0]));

    printf("sizeof(data[0][0]) = %d\n", sizeof(data[0][0]));
    return 0;
}
*/
// 출력 결과 
/*
  1   2
  3   4
  5   6
sizeof(data)       = 24
sizeof(data[0])    = 8
sizeof(data[0][0]) = 4

*/



// pointer_size.c

#include <stdio.h>
int main(void) {
    int* pi;       
    
    double* pd;   

    char* pc;
    printf("sizeof(pi) = %d\n", sizeof(pi));       

    printf("sizeof(pd) = %d\n", sizeof(pd));

    printf("sizeof(pc) = %d\n", sizeof(pc));

    printf("sizeof(int*) = %d\n", sizeof(int*));    

    printf("sizeof(double*) = %d\n", sizeof(double*));

    printf("sizeof(char*) = %d\n", sizeof(char*));
    return 0;
}
// 출력 결과 

/*
sizeof(pi) = 8
sizeof(pd) = 8
sizeof(pc) = 8
sizeof(int*) = 8
sizeof(double*) = 8
sizeof(char*) = 8

*/

// 주소를 저장해야 하는 포인터는 그냥 무조건 4or 8byte임. int로 선언했든, double, char 상관 없이.
