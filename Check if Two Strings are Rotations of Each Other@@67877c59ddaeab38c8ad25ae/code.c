#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    // Input strings
    scanf("%s", str1);
    scanf("%s", str2);

    // Get lengths
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths are different, they can't be rotations
    if (len1 != len2) {
        printf("No\n");
        return 0;
    }

    // Concatenate str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    if (strstr(temp, str2)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
