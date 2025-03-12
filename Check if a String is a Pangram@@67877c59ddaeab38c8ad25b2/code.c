#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    scanf("%[^n],str");
    int n=strlen(str);
    char alphabets[]="abcdefghijklmnopqrstuvwxyz";
    if(strstr(alphabets,str)){
        printf("Yes");
    }else{
        printf("No");
    }
    
    
}