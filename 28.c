#include <stdio.h>

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}

int main() {
    int num;
    
    printf("������� �����: ");
    scanf("%d", &num);

    printf("��������� %d: %d\n", num, factorial(num));

    return 0;
}
