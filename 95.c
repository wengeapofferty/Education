#include <stdio.h>

int main() {
    int limit;
    
    printf("������� ������: ");
    scanf("%d", &limit);

    int sum = 0;

    for (int i = 2; i <= limit; ++i) {
        sum += i * i - (i - 1) * (i - 1);
    }

    printf("����� ���� ���������� ��������� ���������������� ��������� ����������� ����� �� %d: %d\n", limit, sum);

    return 0;
}
