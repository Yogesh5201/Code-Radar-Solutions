#include <stdio.h>
#include <ctype.h>


char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c",&a);
    a=tolower(a);
    if(a>='a'&&a<='z'){
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
            printf("Vowel");
        }else{
            printf("Consonant");
        }
    }else if((int)a>=1&&(int)a<=9){
        printf("Digit");
    }else{
        printf("Special character");
    }
    return 0;
}