#include <stdio.h>

int main() {
    int limit;
    
    printf("Введите предел: ");
    scanf("%d", &limit);

    int sum = 0;
    int fib1 = 0, fib2 = 1, fib3;

    while (fib2 < limit) {
        sum += fib2;
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
    }

    printf("Сумма чисел Фибоначчи, меньших %d: %d\n", limit, sum);

    return 0;
}
