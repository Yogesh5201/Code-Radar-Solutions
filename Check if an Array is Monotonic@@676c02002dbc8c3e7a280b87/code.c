#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int inc=1;
    int dec=1;
    
    for(int i=0;i<n-1;i++){
        
        if(arr[i]>arr[i+i]){
            inc=0;
        }if(arr[i]<arr[i+i]){
            dec=0;
        }
    }
    if(inc||dec){
        printf("YES");
    }else{
        printf("NO");
    }
}