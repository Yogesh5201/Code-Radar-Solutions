#include<stdio.h>
#include<string.h>
char caesarCipher(char str[],int n,char encrypted){
    for(int i=0;i<strlen(str);i++){
        str[i]=str[i]+1;
    }
   return str;}
