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
        printf("Rectangle %d: Area = %d, Perimeter = %d",i+1,2(rectangles[i].length+rectangles[i].breadth),rectangles[i].length*rectangles[i].breadth);
    }
    
}