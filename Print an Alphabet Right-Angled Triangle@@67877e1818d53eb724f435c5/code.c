// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=97;j<=97+i;j++){
            printf("%c",j);
        }printf("\n");
    }
}