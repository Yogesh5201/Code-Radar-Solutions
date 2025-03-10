#include<stdio.h>
struct student{
    int rollNumber;
    char name[50];
    float marks;
}
int main(){
    int n;
    scanf("%d",&n);
    struct student students[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&student[i].rollNumber,&student[i].name,&student[i].marks);
    }
    for(int i=0;i<n;i++){
        printf("%d %s %f",student[i].rollNumber,student[i].name,student[i].marks);
    }
}