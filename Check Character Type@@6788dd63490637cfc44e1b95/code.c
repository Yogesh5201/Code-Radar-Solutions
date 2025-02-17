#include <stdio.h>
#include <ctype.h>


char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%d",&a);
    a=tolower(a);
    return 0;
}