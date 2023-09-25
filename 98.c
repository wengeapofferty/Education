#include <stdio.h>
#include <math.h>

int isArmstrong(int num, int digits) {
    int original = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return original == sum;
}

int main() {
    int num, digits;
    
    printf("������� �����: ");
    scanf("%d", &num);

    printf("������� ����� ����: ");
    scanf("%d", &digits);

    if (isArmstrong(num, digits)) {
        printf("%d - ����� ���������� � %d �������.\n", num, digits);
    } else {
        printf("%d - �� ����� ���������� � %d �������.\n", num, digits);
    }

    return 0;
}
