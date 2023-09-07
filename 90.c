#include <stdio.h>
#include <math.h>

int sumOfDigitsToPower(int num, int power) {
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, power);
        num /= 10;
    }

    return sum;
}

int main() {
    int power;
    
    printf("������� �������: ");
    scanf("%d", &power);

    int sum = 0;

    for (int i = 10; i <= 1000000; ++i) {
        if (i == sumOfDigitsToPower(i, power)) {
            sum += i;
        }
    }

    printf("����� ���� �����, ������� ����� �������� ��� ����� ����� ����, ����������� � ������� %d: %d\n", power, sum);

    return 0;
}
