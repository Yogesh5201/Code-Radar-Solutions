#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    char word1[30] ,word2[30],word3[30],word[4];
    sscanf(str,"%s %s %s %s",word1,word2,word3,word4);
    int n1=strlen(word1);
    int n2=strlen(word2);
    int n3=strlen(word3);
    int n4=strlen(word4);
    if(n1>n2 && n1>n3 && n1>n4){
        printf("%s",word1);
    }
    else if(n2>n1 && n2>n3 &&n2>n4){
        printf("%s",word2);
    }
    else if(n3>n1 && n3>n2 && n3>n4){
        printf("%s",word3);
    }
    else if(n4>n1 && n4>n2 && n4>n3){
        printf("%s",word3);
    }
}