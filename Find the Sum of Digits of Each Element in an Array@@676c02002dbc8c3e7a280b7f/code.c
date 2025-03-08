#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],new[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int a=arr[i];
        int sum=0;
        while(a>0){
            sum+=a%10;
            a=a/10
        }
        new[i]=sum;
    }
    for(int i=0;i<n;i++){
        printf("%d",new[i]);
    }
}