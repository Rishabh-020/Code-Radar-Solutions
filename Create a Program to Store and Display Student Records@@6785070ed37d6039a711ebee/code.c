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
    int num;
    scanf("%d", &num);
    struct Student student[num];
    for(int i=0;i<num;i++){
        scanf("%d",&student[i].id );
        scanf("%s",student[i].name);
        scanf("%f",&student[i].grade);
    }
    for(int i=0;i<num;i++){
        printf("Student Id:%d\n",student[i].id );
        printf("Student Name:%s\n",student[i].name);
        printf("Student Grade:%.2f\n",student[i].grade);
    }
    return 0;
}