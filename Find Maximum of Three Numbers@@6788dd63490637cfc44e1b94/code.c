#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        int max=a;
    }
    else if(b>a && b>c){
        int max=b;
    }
    else if(c>b && c>a){
        int max=c;
    }
    printf("%d",max);
    return 0;
}