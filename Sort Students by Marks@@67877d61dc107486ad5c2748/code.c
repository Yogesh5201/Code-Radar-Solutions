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
  
    
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&students[i].rollNumber,&students[i].name,&students[i].marks);
    }
      int min=students[0].marks;
    for(int i=0;i<n;i++){
        if(students[i].marks<min){
            struct student temp=students[0];
            students[0]=students[i];
            students[i]=temp;
            
        }
        
    }for(int i=0;i<n;i++){
    printf("Roll Number: %d, Name: %s, Marks: %.2f\n",students[i].rollNumber,students[i].name,students[i].marks);
}}