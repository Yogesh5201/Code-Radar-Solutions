#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n<2){
        printf("%d",arr[0]);
        break;
    }
    if(arr[0]>arr[1]){
        printf("%d",arr[0]);
        break;
    }
    for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i+1]&&arr[i]>arr[i-1]){
            printf("%d",arr[i]);
            break;
        }
    }if(arr[n-1]>arr[arr[n-2]]){
        printf("%d",arr[n-1]);
        break;
    }
}
