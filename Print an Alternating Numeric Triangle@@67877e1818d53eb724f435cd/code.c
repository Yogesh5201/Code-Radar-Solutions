// Your code here...
#include<stdio.h>
int main(){
    int n;
    int num=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(num>0){
                 printf("%d ",num++);
            }
            else{printf("%d ",num--);}
        }printf("\n");
    }
}