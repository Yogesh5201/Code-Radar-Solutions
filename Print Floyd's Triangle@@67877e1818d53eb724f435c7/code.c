// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<i+i;j+i){
            printf("%d ",j);
        }printf("\n");
    }
}