#include <stdio.h>

int main() {
    int limit;
    
    printf("������� ������: ");
    scanf("%d", &limit);

    int sum = 0;
    int fib1 = 0, fib2 = 1, fib3;

    while (fib2 < limit) {
        sum += fib2;
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
    }

    printf("����� ����� ���������, ������� %d: %d\n", limit, sum);

    return 0;
}
