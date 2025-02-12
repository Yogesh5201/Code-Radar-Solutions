#include<stdio.h>
#include<math.h>
int main(){
    int a,isprime=1;
    scanf("%d",&a);
    if(a<2){
        printf("Not Prime\n");
    }
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
           isprime=0;
            break;
        }
        
    }
    if (isprime){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
}