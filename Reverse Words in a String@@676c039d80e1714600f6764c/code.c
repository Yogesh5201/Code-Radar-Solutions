#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int n=strlen(str);
    int a=0;
    for(int i=0;i<n;i++){
        if(str[i]==' '){
             a=i;
        }
    }
    for(int i=0;i<a/2;i++){
        char temp=str[i];
        str[i]=str[a-i-1];
        str[a-i-1]=temp;
    }
    for(int i=a/2-1;i>=0;i--){
        char temp=str[i];
        str[i]=str[a-i-1];
        str[a-i-1]=temp;
    }
    printf("%s",str);

}