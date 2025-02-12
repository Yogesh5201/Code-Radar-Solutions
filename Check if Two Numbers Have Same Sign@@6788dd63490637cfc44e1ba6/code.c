#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>0&&b>0){
        printf("Equal");
    }
    else if(a<0&&b<0){
        printf("Equal");
    }
    
    else if(a==b){
        printf("Equal");
    }
    else{
        printf("Not Equal");
    }

    return 0;
}