// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>12){
        printf("Invalid month");
    }else{
       if(a<=7){
         if(a%2==0){
        if(a==2){
            printf("28");
        }else{
            printf("30");
        }
    }
    else{
        printf("31");
    }
       }else{
         if(a%2==0){
        if(a==2){
            printf("28");
        }else{
            printf("31");
        }
    }
    else{
        printf("30");
    }
       }
    }
    return 0;
}