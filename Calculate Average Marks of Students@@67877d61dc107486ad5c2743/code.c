#include<stdio.h>
struct student{
    int rollNumber;
    char name[50];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    int marks=0
    struct student students[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&students[i].rollNumber,&students[i].name,&students[i].marks);
    }
    for(int i=0;i<n;i++){
        marks+=students.marks[i];
        
}
printf("Average Marks: %.2f",marks/n)}