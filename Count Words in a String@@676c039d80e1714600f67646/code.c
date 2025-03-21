#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int n=strlen(str);
    int count=0;
    for(int i=1;i<n;i++){
        if(str[i]==' '){
            count++;
        }
    }printf("%d",count);
}