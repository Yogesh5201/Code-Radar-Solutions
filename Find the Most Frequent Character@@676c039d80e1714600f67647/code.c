#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(str[j] < str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

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

    }if(max==0){
        printf("%c",str[0]);
    }else{
        printf("%c",mostfrequent);
    }
  
    
}