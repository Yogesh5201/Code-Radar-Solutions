#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int n=strlen(str);
    for(int i=0;i<n;i++){
        for(int j=i+1;i<n;i++){
            if(str[i]==str[j]){
                for(int k=j+1;k<n;k++){
                    str[k]=str[k+1];
                }
            }
        }
    }
    printf("%s",str);
}