#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    
    printf("������� ������ �����: ");
    scanf("%d", &num1);

    printf("������� ������ �����: ");
    scanf("%d", &num2);

    int result = lcm(num1, num2);
    printf("��� ����� %d � %d: %d\n", num1, num2, result);

    return 0;
}
