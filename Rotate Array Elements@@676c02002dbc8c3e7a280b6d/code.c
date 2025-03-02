#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a;
    scanf("%d",&a);
    
    for(int i=0;i<n;i++){
        if(i<n-a-1){
        arr[i]=arr[i+a];}
        else{
            arr[i]=arr[i-2-1];
        }
    }

    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}