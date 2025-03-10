#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%[^\n]", str);

    int n = strlen(str);
  

    int max = 0;
    char mostfrequent;
    for (int i = 0; i < n; i++) {
        if (str[i] == ' ') continue;
        
        int count = 1;
        while (i + 1 < n && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        if (count > max) {
            max = count;
            mostfrequent = str[i];
        }
    }

    printf("%c", mostfrequent);

    return 0;
}
