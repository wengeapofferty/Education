#include <stdio.h>
#include <string.h>

int isPandigital(int num) {
    int digits[10] = {0};

    while (num > 0) {
        int digit = num % 10;
        digits[digit]++;
        num /= 10;
    }

    for (int i = 0; i < 10; ++i) {
        if (digits[i] != 1) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int num;
    
    printf("������� �����: ");
    scanf("%d", &num);

    if (isPandigital(num)) {
        printf("%d - �������������� �����.\n", num);
    } else {
        printf("%d - �� �������������� �����.\n", num);
    }

    return 0;
}
