#include <stdio.h>

int main() {
    int n;
    printf("������� n: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("����� ������ %d ����������� �����: %d\n", n, sum);

    return 0;
}
