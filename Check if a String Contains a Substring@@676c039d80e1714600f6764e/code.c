#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[30], words[4][30] = {"", "", "", ""};

    // Read input string (full sentence)
    scanf(" %[^\n]", str);

    // Read the word to search
    scanf("%s", word);

    // Extract words from the input string
    int count = sscanf(str, "%s %s %s %s", words[0], words[1], words[2], words[3]);

    // Check if the word exists in any of the extracted words
    for (int i = 0; i < count; i++) {
        if (strcmp(word, words[i]) == 0) {
            printf("Yes\n");
            return 0;  // Exit immediately if a match is found
        }
    }

    // If no match was found
    printf("No\n");
    return 0;
}
