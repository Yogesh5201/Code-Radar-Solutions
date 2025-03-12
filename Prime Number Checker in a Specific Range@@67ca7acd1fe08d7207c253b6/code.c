#include<stdio.h>
void printPrimesInRange(int a,int b){
    for(int i=a;i<=b;i++){
        if(i<=1){
            continue;
        }
        else{
            int count=0;
            for(int j=0;j*j<i;j++){
                if(j%i==0){
                    printf("%d",i);
                    count++;
                }
            
            }
        }if(count==0){
                printf("No prime numbers");
    }
}