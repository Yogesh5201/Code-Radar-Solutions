#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c,max;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b||b>c){
        max=a;
    }
    else if(b>c||b>a){
        max=b;
    }
    else if(c>a||c>b){
        max=c;
    }
    printf("%d",max);
    
    return 0;
}