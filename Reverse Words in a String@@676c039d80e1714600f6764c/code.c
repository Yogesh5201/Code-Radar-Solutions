#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int n=strlen(str);
    for(int i=0;i<n;i++){
        if(str[i]==' '){
             a=i;
        }
    }
    for(int i=0;i<a/2;i++){
        char temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
    for(int i=a/2-1;i>=0;i--){
        char temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
    printf("%s",str);

}