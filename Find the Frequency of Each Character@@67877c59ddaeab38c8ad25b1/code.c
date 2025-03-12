#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%[^\n]", str);
    int n = strlen(str);
    int visited[256] = {0};  
    for (int i = 0; i < n; i++) {
        if (visited[(unsigned char)str[i]]) {  
            continue;  
        }

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        printf("%c: %d\n", str[i], count);
        visited[(unsigned char)str[i]] = 1;
    }

    return 0;
}
