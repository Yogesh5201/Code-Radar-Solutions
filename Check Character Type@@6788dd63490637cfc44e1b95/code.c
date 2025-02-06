#include <stdio.h>
#include <ctype.h>


char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char alphabet;
    scanf("%c",&alphabet);
    alphabet=tolower(alphabet);
    if(alphabet>='a' && alphabet<='z'){
        if(alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u'){
            printf("Vowel");
        }else{
            printf("Consonant");
        }
    }else if(isdigit(alphabet)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}