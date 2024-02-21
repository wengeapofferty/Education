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
    int num, power;
    
    printf("������� �����: ");
    scanf("%d", &num);

    printf("������� �������: ");
    scanf("%d", &power);

    int result = sumOfDigitsToPower(num, power);
    printf("����� ���� ����� %d, ����������� � ������� %d: %d\n", num, power, result);

    return 0;
}
