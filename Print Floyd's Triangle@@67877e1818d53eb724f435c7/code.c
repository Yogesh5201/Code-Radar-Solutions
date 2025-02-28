// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i+2){
        for(int j=i;j<i+i;j++){
            printf("%d ",j);
        }printf("\n");
    }
}