// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
        if(j==1||a==j+1){
            printf("* ");
        }else{
            printf("");
        }
    } printf("\n");
    }
}