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
    int num,count=0;
    float count1=0.00;
    scanf("%d", &num);
    struct Student student[num];
    for(int i=0;i<num;i++){
        scanf("%d",&student[i].id );
        scanf("%s",student[i].name);
        scanf("%f",&student[i].grade);
        count1+=student[i].grade;
    }
    for(int i=0;i<num;i++){
        if(student[i].grade>=50.00)count++;
    }
    if(count==num)printf("All Passed");
    else printf("Not All Passed");
    return 0;
}
