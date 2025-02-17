#include <stdio.h>
#include <ctype.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char alphabet;
    scanf("%c",&alphabet);
    if(a>='A'&&a<='Z'){
        printf("Uppercase");
    }else if(a>='a'&&a<='z'){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}