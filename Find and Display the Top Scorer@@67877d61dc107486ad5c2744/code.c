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
    int num,grade1=0;
    struct Student topScorer = {0, "", 0.0};
    scanf("%d", &num);
    struct Student student[num];
    for(int i=0;i<num;i++){
        scanf("%d",&student[i].id );
        scanf("%s",student[i].name);
        scanf("%f",&student[i].grade);
    }
    for(int i=0;i<num;i++){
         if (students[i].marks > maxMarks) {
            maxMarks = students[i].marks;
            topScorer = students[i]; 
         }
    }
     printf("Top Scorer: Roll Number: %.0lf, Name: %s, Marks: %.2f", topScorer.rollNumber,topScorer.name,topScorer.marks);

    return 0;
}