#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if(a < 0){
        a=-a;
    }
    while(a>=10){
        a=a/10;
    }
    if(a%2==0){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}   