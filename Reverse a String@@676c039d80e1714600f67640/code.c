#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",&str);
    for(int i=0;i<strlen(str);i++){
        char temp=str[i];
        str[i]=str[n-1];
        str[n-1]=temp
    }
    printf("%s",str);
}