#include <stdio.h>

int main() {
    int n;
    
    printf("������� n: ");
    scanf("%d", &n);

    int sumOfSquares = 0;
    int squareOfSum = 0;

    for (int i = 1; i <= n; ++i) {
        sumOfSquares += i * i;
        squareOfSum += i;
    }

    squareOfSum *= squareOfSum;

    int result = squareOfSum - sumOfSquares;
    printf("�������: %d\n", result);

    return 0;
}
