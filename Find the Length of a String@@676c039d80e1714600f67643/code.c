#include<stdio.h>
int main(){
    char str[100];
    scanf("%s",str);
    int i=0;
    int count=0;
    while(str[i]!=='\n'){
        count++;
        i++;
    }
    printf("%d",count);
}