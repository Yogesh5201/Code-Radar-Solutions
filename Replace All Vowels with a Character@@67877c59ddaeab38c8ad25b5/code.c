#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    scanf("%[^\n]", str); 
    char k;
    scanf("%c",&k);

    for (int i = 0; str[i] != '\0'; i++) {
        if( str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            str[i]=k;
        }
    }
    printf("%s",str);
    return 0;
}
