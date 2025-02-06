#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int year;
    scanf("%d",&year);
    if(num%4==0 || num%400==0){
        printf("Leap Year");
    }
    else if(year%100==0){
        printf("Not a Leap Year");
    }
    return 0;
}