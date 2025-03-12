#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    scanf("%[^\n]", str); 
    char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
    int flag = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isalpha(str[i])&&str[i] != ' ') {  
            flag = 0; 
            break;
        }
    }
    if (flag) {
        printf("Yes\n");
    } else {
        printf("No\n"); 
    }

    return 0;
}
