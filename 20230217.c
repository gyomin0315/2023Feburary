
#include <stdio.h>
int get_max(int x, int y, int z) {   

    int max = x > y ? x : y;

    max = z > max ? z : max;

    return max;

}
int main(void) {

    //get_max(10, 20);              // ������ ������ �����ϸ� ������ ����

    //get_max(10, 20, 30, 40);      // ������ ������ ������ ������ ���

    double max;

    max = get_max(12.34, 0.5, 7.9); // ���ڸ� �Ű������� ������������ �� ��ȯ Call by Valule(���� ���� ȣ��)

    printf("max = %f\n", max);

    return 0;

}

// ��� ��� 
/*

max = 12.000000

*/
// �ڷ��� �����ϸ� �¾ƾ��ϰ�, ����, ������ �ſ� �߿�. 

// (05-1) max.c

#include <stdio.h>

int get_max(int x, int y, int z);

int main(void) {

    //get_max(10, 20);              // ������ ������ �����ϸ� ������ ����

    //get_max(10, 20, 30, 40);      // ������ ������ ������ ������ ���

    double max;

    max = get_max(12.34, 0.5, 7.9); // ���ڸ� �Ű������� ������������ �� ��ȯ Call by Valule(���� ���� ȣ��)

    printf("max = %f\n", max);

    //get_ma(1, 2, 3);              // �߸��� �̸����� ȣ���ϸ� ��ũ ����

    return 0;

}

int get_max(int x, int y, int z) {   // �Ű������� 3���� �Լ�

    int max = x > y ? x : y;

    max = z > max ? z : max;

    return max;

}




