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
        char temp=str[a-i-1];
        str[a-i-1]=str[i];
        str[i]=temp;
    }
    for(int i=n/2;i>=a;i--){
        char temp=str[n-i-1];
        str[n-i-1]=str[i];
        str[i]=temp;
    }
    
    
    
    printf("%s",str);
}
