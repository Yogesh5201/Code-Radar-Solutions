#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count;
    for(int i=0;i<n;i++){
        int a=arr[i];
        int rev=1;
        count=0;
        while(i>0){
            rev=(rev*10)+a%10;
            a=a/10;
        }
        if(rev==arr[i]){
            count++;
        }
        
    }
    printf("%d",count);
    return 0;
}