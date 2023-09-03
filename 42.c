#include <stdio.h>
#include <math.h>

int isPerfectSquare(int num) {
    int sqrtNum = sqrt(num);
    return sqrtNum * sqrtNum == num;
}

int main() {
    int num;
    
    printf("������� �����: ");
    scanf("%d", &num);

    if (isPerfectSquare(num)) {
        printf("%d - ����������� �������.\n", num);
    } else {
        printf("%d - �� ����������� �������.\n", num);
    }

    return 0;
}
