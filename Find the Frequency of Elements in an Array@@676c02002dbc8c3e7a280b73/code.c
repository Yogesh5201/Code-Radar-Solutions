#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count[n];
    for(int i=0;i<n;i++){
        int frequency=1;
        if(count[i]){
            continue;
        }
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j+1]){
                frequency+=1;
                count[j]=arr[j+1];
            }
            
           
        } printf("%d  %d",arr[i],frequency);
    }
    
}