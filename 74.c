#include <stdio.h>

int doubleFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * doubleFactorial(n - 2);
}

int sumOfDigits(int num) {
    int sum = 0;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main() {
    int num;
    
    printf("������� �����: ");
    scanf("%d", &num);

    int df = doubleFactorial(num);
    int result = sumOfDigits(df);
    printf("����� ���� �������� ���������� %d: %d\n", df, result);

    return 0;
}
