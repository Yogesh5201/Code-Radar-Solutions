#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            if(arr[i]>max){
                max=arr[i];
            }
        }
    }
    if(max==0){
        printf("-1");
    }else{
        printf("%d",max);
    }
}