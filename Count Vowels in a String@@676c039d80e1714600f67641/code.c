#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",&str);
    int n=strlen(str);
    int count=0;
    for(int i=0;i<n;i++){
        int a=str[i];
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
            count++;
    }
    }
    printf("%d",count);
}