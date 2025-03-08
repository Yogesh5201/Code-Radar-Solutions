#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0], max_count = 0;
    int second_max = -1, second_max_count = 0;
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                
            }
             if(count > max_count) {
            second_max = max;           
            second_max_count = max_count;

            max = arr[i];
            max_count = count;
        } 
       
        else if(count > second_max_count && arr[i] != max) {
            second_max = arr[i];
            second_max_count = count;
        }
    }
        }
    }
    printf("%d",second_max);
    
}