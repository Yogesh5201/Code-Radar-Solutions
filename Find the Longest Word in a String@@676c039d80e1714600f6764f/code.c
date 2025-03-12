#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    char word1[30] ,word2[30],word3[30];
    n1=strlen(word1);
    n2=strlen(word2);
    n3=strlen(word3);
    if(n1>n2 && n1>n3){
        printf("%s",word1);
    }
    else if(n2>n1 && n2>n3){
        printf("%s",word2);
    }
    else if(n3>n1 && n3>n2){
        printf("%s",word3);
    }
}