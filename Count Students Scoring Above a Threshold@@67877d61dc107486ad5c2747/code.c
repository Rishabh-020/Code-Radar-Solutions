#include<stdio.h>
struct Student{
    int id;
    char name[50];
    float score;
};
int main(){
    int num,count=0;
    scanf("%d",&num);
    struct Student student[num];
    for(int i=0;i<num;i++){
        scanf("%d",&student[i].id);
        scanf("%s",&student[i].name);
        scanf("%.2f",&student[i].score);
    }
    float target;
    scanf("%f",&target);
    for(int i=0;i<num;i++){
        if(student[i].score>=target){
            count++;
        }
    }
    printf("Count of students scoring above %.2f: %d",target,count);
}