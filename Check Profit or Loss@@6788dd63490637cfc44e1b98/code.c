#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int cp,sp;
    scanf("%d %d",&cp,&sp);
    if(cp>sp){
        printf("Loss");
    }
    else if(sp>cp){
        printf("Profit");
    }
    else{
        printf("No profit")
    }
    return 0;
}