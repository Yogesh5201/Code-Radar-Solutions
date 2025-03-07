#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],temp[n];
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i <= k; i++) {
        temp[i] = arr[i+k];  
    }

    for (int i =k+1; i < n; i++) {
        temp[i] = arr[n-i-k];  
    }
    for(int i=0;i<n;i++){
        printf("%d",temp[i]);
    }
    return 0;
}