#include<stdio.h>
struct student{
    int rollNumber;
    char name[50];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    struct student students[n];
    int count=0;
    int a=0;
    float threshold;
    scanf("%f",&threshold);
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&students[i].rollNumber,&students[i].name,&students[i].marks);
    }
    for(int i=0;i<n;i++){
        if(students[i].marks>threshold){
            count++;    
        }
        
    }
    printf("Count os students scoring above %.2f: %d",threshold,count);
}