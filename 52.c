#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int limit;
    
    printf("������� ������: ");
    scanf("%d", &limit);

    int sum = 0;

    for (int i = 2; i <= limit - 2; ++i) {
        if (isPrime(i) && isPrime(i + 2)) {
            sum += i + (i + 2);
        }
    }

    printf("����� ������� �����-��������� �� %d: %d\n", limit, sum);

    return 0;
}
