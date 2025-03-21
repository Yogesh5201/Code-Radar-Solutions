#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    char word1[30] ,word2[30],word3[30],word4[30];
    int count = sscanf(str, "%s %s %s %s", word1, word2, word3,word4);
    printf("%d",count);
}