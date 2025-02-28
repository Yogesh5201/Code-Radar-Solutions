// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=0;i++){
        for(int j=i;j>0;j--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
    }
}