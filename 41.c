#include <stdio.h>

int sumOfDivisors(int num) {
    int sum = 0;

    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int num;
    
    printf("������� �����: ");
    scanf("%d", &num);

    int result = sumOfDivisors(num);
    printf("����� ��������� ����� %d: %d\n", num, result);

    return 0;
}
