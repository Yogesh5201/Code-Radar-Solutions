#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int num;
   scanf("%d",&num);
   int lsb= num & -num;
   printf("%d",lsb);
    return 0;
}