#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int count=0;
    int inWord=0;
    for(int i=0;i<strlen(str);i++){
      if(str[i]==' '){
        inWord=0;
      }else if(!inWord){
        inWord=1;
        count++;
      }
    
    }
    printf("%d",count);
}