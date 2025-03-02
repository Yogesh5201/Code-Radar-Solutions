#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a;
    scanf("a",&a);
    
    for(int i=0;i<n;i++){
        a[i]=a[i+2];
    }

    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}