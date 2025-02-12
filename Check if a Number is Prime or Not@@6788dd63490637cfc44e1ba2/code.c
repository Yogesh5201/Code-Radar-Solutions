#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<2){
        printf("Not Prime\n");
    }
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            printf("Not Prime");
            break;
        }
        else{
            printf("Prime");
            break;
        }
    }
}