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
    int num,count1=0;
    scanf("%d", &num);
    struct Student student[num];
    for(int i=0;i<num;i++){
        scanf("%d",&student[i].id );
        scanf("%s",student[i].name);
        scanf("%f",&student[i].grade);
        count1+=student[i].grade;
    }
    printf("Total Marks: %.2f",count1);
    printf("Average Marks: %.2f",count1/num);
    return 0;
}
