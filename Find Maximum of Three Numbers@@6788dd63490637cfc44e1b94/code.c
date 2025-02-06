#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c,max;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
         max=a;
    }
    else if(b>a && b>c){
        max=b;
    }
    else if(c>b && c>a){
         max=c;
    }
    else if(a==b && b==c){
         max=a;
    }
    printf("%d",max);
    return 0;
}