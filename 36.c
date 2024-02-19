#include <stdio.h>

void convertToBase(int num, int base) {
    if (num == 0) {
        return;
    }
    convertToBase(num / base, base);
    printf("%d", num % base);
}

int main() {
    int num, base;
    
    printf("������� �����: ");
    scanf("%d", &num);

    printf("������� ���� (2, 8, 16): ");
    scanf("%d", &base);

    if (base == 2 || base == 8 || base == 16) {
        printf("����� %d � %d-� ������� ���������: ", num, base);
        convertToBase(num, base);
        printf("\n");
    } else {
        printf("���������������� ����.\n");
    }

    return 0;
}
