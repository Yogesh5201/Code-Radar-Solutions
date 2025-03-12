#include<stdio.h>
#include<string.h>
int main(){

    char str[100]; 
    scanf("%[^\n]",str);
    char word1[20], word2[20];

    sscanf(str, "%s %s", word1, word2);

    int n1=strlen(word1);
    int n2=strlen(word2);
    int a=0;
   
    for(int i=0;i<n1;i++){
        char temp=word1[a-i-1];
        word1[a-i-1]=word1[i];
        word[i]=temp;
    }
    for(int i=a+1;i<n/2;i++){
        char temp=word2[n-i-1];
        word2[n-i-1]=word2[i];
        word2[i]=temp;
    }
    
    
    
    printf("%s %s",word1,word2);
}
