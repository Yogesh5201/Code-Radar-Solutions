#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int max;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            max=arr[i-1];
        }else{
            continue;
        }
    }
    printf("%d",max);
}