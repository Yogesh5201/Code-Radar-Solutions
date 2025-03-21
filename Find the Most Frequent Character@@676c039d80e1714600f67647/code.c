#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int freq[100];
    int n=strlen(str);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(str[i]==str[j]){
                count++;
            }
        }freq[i]=count;
    }
    int max=freq[0];
    for(int i=0;i<n;i++){
        if(freq[i]>=max){
            max=freq[i];
            int a=i;
        }
    }
    printf("%d",str[a]);

    
    
}
