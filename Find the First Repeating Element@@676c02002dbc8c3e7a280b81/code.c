#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    int max=0;
    int max_count=0;
    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
       if(arr[i]==arr[j]){
        count=count+1;
       }
    }if(count>max_count){
        max_count=count;
        max=arr[i];
    }

    }
    printf("%d",max);

    return 0;
}