#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n].counted[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        int frequency=1;
        if(counted[i]){
            continue;
        }
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j+1]){
                frequency+=1;
                counted[j]=arr[j+1];
            }
            
           
        } printf("%d  %d",arr[i],frequency);
    }
    
}