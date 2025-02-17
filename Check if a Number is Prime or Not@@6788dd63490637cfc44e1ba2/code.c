#include<stdio.h>

int main(){
   int a;
   int is_prime=1;
   scanf("%d",&a);
   if(a==1||a==0){
    is_prime=0;
   }else{
    for(int i;i*i>a;i++){
        if(i%a==0){
            is_prime=0;
        }
    }
   }
   if(is_prime){
    printf("Prime");
   }else{
    printf("Not Prime");
   }
}