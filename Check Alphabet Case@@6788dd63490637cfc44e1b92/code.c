#include <stdio.h>
#include <ctype.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char alphabet;
    scanf("%c",&alphabet);
    if(isupper(alphabet)){
        printf("Uppercase");
    }else{
        printf("Lowercase");
    }
    return 0;
}