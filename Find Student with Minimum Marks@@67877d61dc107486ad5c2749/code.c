#include<stdio.h>
struct Student{
    int id;
    char name[50];
    float score;
};
int main(){
    int num,max=100000,j=0;
    scanf("%d",&num);
    struct Student student[num];
    for(int i=0;i<num;i++){
        scanf("%d",&student[i].id );
        scanf("%s",student[i].name);
        scanf("%f",&student[i].score);
    }
    for(int i=0;i<num;i++){
        if(student[i].score<max){
            max=student[i].score;
            j=i
        }
    }
    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f"
    ,student[j].id,student[j].name,max);
}