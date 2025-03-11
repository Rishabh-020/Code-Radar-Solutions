#include <stdio.h>
#include<string.h>
struct Student
{
    int id;
    char name[50];
    float grade;
};

int main()
{
    int num,find;
    scanf("%d", &num);
    scanf("%d", &find);
    struct Student student[num];
    for(int i=0;i<num;i++){
        scanf("%d",&student[i].id );
        scanf("%s",student[i].name);
        scanf("%f",&student[i].grade);
    }
    for(int i=0;i<num;i++){
        if(find==student[i].id){
            printf("Roll Number: %d, Name: %s,Marks: %.2f",student[i].id,student[i].name,student[i].grade);
            return 0;
        }
    }
    printf("Student not found");
    return 0;
}
