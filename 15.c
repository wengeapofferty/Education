#include <stdio.h>

int main() {
    int rows, cols;
    printf("������� ���������� ����� � ��������: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    printf("������� �������� �������:\n");
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum += matrix[i][j];
        }
    }

    printf("����� ���������: %d\n", sum);

    return 0;
}
