#include<stdio.h>
#include<string.h>
int main(){
    char str[100],word1[],word2[];
    sscanf(str,word1,word2);
    n1=strlen(word1);
    n2=strlen(word2);
    for(int i=0;i<n1;i++){
        char temp=word1[i];
        word1[i]=word1[n1-i-1];
        word1[n1-1-1]=temp;
    }
    for(int i=0;i<n2;i++){
        char temp=word2[i];
        word2[i]=word2[n2-i-1];
        word2[n2-1-1]=temp;
    }
    printf("%s %s",word1,word2);
}