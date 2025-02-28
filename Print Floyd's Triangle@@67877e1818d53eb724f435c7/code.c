// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        
        for(int j=a;j<i+i;j++){
            printf("%d ",j);
             a+=j-i;
        }
        
        printf("\n");
    }
}