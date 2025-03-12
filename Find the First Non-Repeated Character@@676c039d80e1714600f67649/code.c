#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256

int main() {
    char str[100];
    int count[MAX_CHAR] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        count[(unsigned char)str[i]]++;
    }
    char result = '-';
    for (int i = 0; i < len; i++) {
        if (count[(unsigned char)str[i]] == 1) {
            result = str[i];
            break;
        }
    }

    printf("%c\n", result);

    return 0;
}
