#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
       count[i]=0;
    }
    int count[n];
    for(int i=0;i<n;i++){
        int frequency=1;
        if(count[i]){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                frequency+=1;
                count[j]=arr[j];
            }
            
           
        } printf("%d  %d",arr[i],frequency);
    }
    
}