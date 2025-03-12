#include<stdio.h>
struct Student{
    int id;
    char name[50];
    float num;
};
int main(){
    int num;
    scanf("%d",&num);
    struct Student student[num];
    for(int i=0;i<num;i++)scanf("%d %s &f",student[i].id,student[i].name,student[i].num);
    for(int i=0;i<num;i++){
        if(student[i].num>=85){
            printf("Roll Number: %d, Name: %s, Grade: A",student[i].id,student[i].name);
        }
        else if(student[i].num<=84 && student[i].num>=70){
            printf("Roll Number: %d, Name: %s, Grade: B",student[i].id,student[i].name);
        }
        // else {
        //     printf("Roll Number: %d, Name: %s, Grade: C",student[i].id,student[i].name);
        // }
    }
    return 0;
}