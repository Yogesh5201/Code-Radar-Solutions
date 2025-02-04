#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    char s=(char)a;
    char b=s[0];
    int c=(int)b;
    if(c%2==0){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}   