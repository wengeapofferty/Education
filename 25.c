#include <stdio.h>

int isPowerOfTwo(int num) {
    if (num <= 0) {
        return 0;
    }
    return (num & (num - 1)) == 0;
}

int main() {
    int num;
    printf("������� �����: ");
    scanf("%d", &num);

    if (isPowerOfTwo(num)) {
        printf("%d - ������� ������.\n", num);
    } else {
        printf("%d - �� ������� ������.\n", num);
    }

    return 0;
}
