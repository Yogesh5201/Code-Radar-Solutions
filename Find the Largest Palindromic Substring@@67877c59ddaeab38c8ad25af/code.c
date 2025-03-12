#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str); // Read input string
    
    int len = strlen(str);
    int start = 0, maxLen = 1; // Store longest palindrome position

    for (int i = 0; i < len; i++) {
        int l = i, r = i; // Odd-length palindromes
        while (l >= 0 && r < len && str[l] == str[r]) {
            if (r - l + 1 > maxLen) {
                start = l;
                maxLen = r - l + 1;
            }
            l--;
            r++;
        }

        l = i, r = i + 1; // Even-length palindromes
        while (l >= 0 && r < len && str[l] == str[r]) {
            if (r - l + 1 > maxLen) {
                start = l;
                maxLen = r - l + 1;
            }
            l--;
            r++;
        }
    }

    for (int i = start; i < start + maxLen; i++) {
        printf("%c", str[i]); // Print the longest palindrome
    }
    
    return 0;
}
Loading Code...