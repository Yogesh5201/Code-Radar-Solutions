#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    char word[30];
    scanf("%s",word);
    char word1[30],word2[30],word3[30],word4[30];
    int count=sscanf(str,"%s %s %s %s",word1,word2,word3,word4);
    if(count<4)word4[0]='\0';
    if(count<3)word3[0]='\0';
    if(count<2)word2[0]='\0';
    if(count<1)word1[0]='\0';
    if(strcmp(word,word1)==0){
        printf("Yes");
    }
    else if(strcmp(word,word2)==0){
        printf("Yes");
    }
    else if(strcmp(word,word3)==0){
        printf("Yes");
    }
    else if(strcmp(word,word4)==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}