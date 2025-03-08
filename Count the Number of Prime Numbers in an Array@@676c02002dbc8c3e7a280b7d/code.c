#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        int a=arr[i];
        if(a<=1){
            continue;
        }else{
            for(int i=2;i*i<a;i++){
                if(a%i==0){
                    continue;
                }else{
                    count++;
                }
            }
        }
    }
    printf("%d",count);
}