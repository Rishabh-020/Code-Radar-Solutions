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
    float count=0;
    scanf("%d", &num);
    struct Student student[num];
    for(int i=0;i<num;i++){
        scanf("%d",&student[i].id );
        scanf("%s",student[i].name);
        scanf("%f",&student[i].grade);
        count+=student[i].grade;
    }
    printf("%.2f",count);
    return 0;
}