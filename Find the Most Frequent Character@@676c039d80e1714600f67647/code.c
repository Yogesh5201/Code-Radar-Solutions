#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int max=0;
    char mostfrequent;
    int n=strlen(str);
    for(int i=0;i<n;i++){
        if(str[i]==' ')continue;
        int count=0;
        for(int j=0;j<n;j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count>max){
            max=count;
            mostfrequent=str[i];
        }

    }
    printf("%c",mostfrequent);
    
}