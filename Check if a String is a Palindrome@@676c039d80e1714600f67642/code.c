#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    char rev[100];
    scanf("%s",str);
    int n=strlen(str);
    int count=0;
    for(int i=0;i<n;i++){
       rev[i]=str[n-i-1];
    }
    rev[n] = '\0';
    if(strcmp(rev, str) == 0){
        printf("Yes");
    }else{
        printf("No");
    }

    
}