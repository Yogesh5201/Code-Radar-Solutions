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
    
    printf("%s",str);

}