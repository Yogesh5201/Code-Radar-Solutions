#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int n=strlen(str);
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=i+i;j<n;j++){
            if(str[i]==str[j]){
                count++;
            }
            
        }printf("%s: %d",str[i],count);
    }
}