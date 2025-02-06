#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char alphabet;
    scanf("%c",&alphabet);
    if(alphabet>='a' && alphabet<='z'){
        if(alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u'){
            printf("Vowel");
        }else{
            printf("Consonant");
        }
    }else{
        printf("Digit");
    }
    return 0;
}