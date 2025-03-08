#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int length[n];
    count=0;
    for(int i=0;i<n;i++){
       if(arr[i]==1){
        count++;
       }
       else if(arr[i]==2){
        count++;
       }
       else if(arr[i]==3){
        count++;
       }
       else if(arr[i]==4){
        count++;
       }
       else if(arr[i]==5){
        count++;
       }
    }
    printf("%d",count);

}