#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if (arr[i]==0){
            arr[i]=arr[i+1];
            arr[n-1-i]=0;
        }
    }
    for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
    }
}