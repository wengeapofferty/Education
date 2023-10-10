#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isDelimiter(char c) {
    return c == ' ' || c == '.' || c == ',' || c == '!' || c == '?';
}

int countWords(char *str) {
    int count = 0;
    int len = strlen(str);
    int isWord = 0;

    for (int i = 0; i < len; ++i) {
        if (!isDelimiter(str[i])) {
            if (!isWord) {
                count++;
                isWord = 1;
            }
        } else {
            isWord = 0;
        }
    }

    return count;
}

int main() {
    char str[1000];
    
    printf("������� ������: ");
    fgets(str, sizeof(str), stdin);
    
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';  // ������� ������ ����� ������
    }

    int wordCount = countWords(str);
    printf("���������� ��������� ����: %d\n", wordCount);

    return 0;
}
