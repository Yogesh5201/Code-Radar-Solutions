#include<stdio.h>
int main(){
    int n;
    int arr[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sorted=1;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            sorted=0;
        }
    }
    if(sorted){
        printf("Sorted");
    }else 
    printf("Not Sorted");
}