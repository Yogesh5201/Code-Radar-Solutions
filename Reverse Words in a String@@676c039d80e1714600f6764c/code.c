#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%[^\n]", str); 

    int n = strlen(str);
    int a = -1, b = -1;
    for (int i = 0; i < n; i++) {
        if (str[i] == ' ') {
            if (a == -1) {
                a = i;  
            }
        }
    }
    if (a == -1) {
        a = n;
        b = -1;
    }

    for (int i = 0, j = a - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    if (b != -1) {
        for (int i = b + 1, j = n - 1; i < j; i++, j--) {
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
        }
    }

    printf("%s", str);
    return 0;
}
