#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int count=0;
    for(int i=strlen(str)-1;i>=0;i--){
        if(str[i]==' '){
            count++;
        }
    }
    printf("%d",count);
}