#include<stdio.h>
typedef struct rectangle{
    int length;
    int breadth;
}rect;
int main(){
    int n;
    scanf("%d",&n);
    rect rectangles[n];
    for(int i=0;i<n;i++){
        scanf("%d %d",&rectangles[i].length,&rectangles[i].breadth);
    }
    for(int i=0;i<n;i++){
        int l=rectangles[i].length;
        int b=rectangles[i].breadth;
        printf("Rectangle %d: Area = %f, Perimeter = %f",i+1,2(l+b),l+b);
    }
    
}