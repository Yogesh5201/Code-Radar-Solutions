#include<stdio.h>
int main(){
    int n;
    
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n-1;i++){
        if((arr[i-1]>arr[i] &&arr[i-1]>arr[i+1])){
             printf("%d",arr[i-1]);
            break;}
        else if((arr[i]>arr[i-1] &&arr[i]>arr[i+i])){
            printf("%d",arr[i]);
            break;
        }
        
        else if((arr[i+1]>arr[i] &&arr[i+1]>arr[i-i])){
             printf("%d",arr[i+1]);
            break;}
        
        else if(arr[i]==arr[i+1] || arr[i]==arr[i-1]){
            printf("-1");
            break;
        }
        else{
            continue;
        }
    }

    }