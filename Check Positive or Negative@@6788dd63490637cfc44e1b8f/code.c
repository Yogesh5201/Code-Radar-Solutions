#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int num;
   scanf("%d",&num);
   if(num>=0){
    printf("Positive");
   }else{
    printf("Negative");
   }
    return 0;
}