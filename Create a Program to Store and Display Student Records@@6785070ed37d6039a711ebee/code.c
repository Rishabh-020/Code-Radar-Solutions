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
        printf("Roll Number: %d, ",student[i].id );
        printf("Name: %s, ",student[i].name);
        printf("Marks: %.2f ",student[i].grade);
        printf("\n");
    }
    return 0;
}