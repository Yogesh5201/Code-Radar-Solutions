#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        int frequency=1;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                frequency+=1;
            }
            
           
        } printf("%d  %d",arr[i],frequency);
    }
    
}