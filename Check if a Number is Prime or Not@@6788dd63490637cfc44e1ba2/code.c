#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=2;i<=(int)sqrt(a);i++){
        if(a%i==0){
            printf("Not Prime");
        }
        else{
            printf("Prime");
        }
    }
}