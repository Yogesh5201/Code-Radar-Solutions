#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d"&arr[i]);
    }
    int a,b;
    int min=arr[0]-arr[1];
    for(int i=1;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(arr[i]-arr[j])<min){
                min=abs(arr[i]-arr[j]);
                if(arr[i]>arr[j]){
                    a=arr[j];
                    b=arr[i];
                }else{
                    a=arr[i];
                    b=arr[j];
                }

            }
        }
    }
    printf("%d %d",a,b);
}