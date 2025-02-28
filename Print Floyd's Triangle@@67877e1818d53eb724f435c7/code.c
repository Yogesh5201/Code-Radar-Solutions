// Your code here...
#include<stdio.h>
int main(){
    int n;
    int j=1;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        
        for(j=j;j<=i+i;j++){
            printf("%d ",j);
             
        }
        
        printf("\n");
    }
}