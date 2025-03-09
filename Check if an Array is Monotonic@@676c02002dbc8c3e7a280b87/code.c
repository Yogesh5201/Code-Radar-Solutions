#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int inc=0;
    int dec=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=arr[i+i]){
            inc=1;
        }if(arr[i]>=arr[i+i]){
            dec=1;
        }
    }
    if(inc||dec){
        printf("YES");
    }else{
        printf("NO");
    }
}