#include <stdio.h>

int isHarshad(int num) {
    int original = num;
    int sum = 0;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return original % sum == 0;
}

int main() {
    int num;
    
    printf("������� �����: ");
    scanf("%d", &num);

    if (isHarshad(num)) {
        printf("%d - ����� ������.\n", num);
    } else {
        printf("%d - �� ����� ������.\n", num);
    }

    return 0;
}
