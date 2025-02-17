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
    }else if(islower(alphabet)){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}