#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int second_max=-169;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            second_max=max;
        } else if (arr[i] > second_max && arr[i] != max) {
            second_max=arr[i];
        }
    }printf("%d",second_max);
}