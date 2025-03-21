#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0}; 
    char maxChar;
    int maxFreq = 0;

    scanf(" %[^\n]", str);
    for (int i = 0; str[i]; i++) {
        freq[(unsigned char)str[i]]++;  
    }
    for (int i = 0; str[i]; i++) {
        if (freq[(unsigned char)str[i]] > maxFreq) {
            maxFreq = freq[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }

    printf("%c\n", maxChar);
    return 0;
}
