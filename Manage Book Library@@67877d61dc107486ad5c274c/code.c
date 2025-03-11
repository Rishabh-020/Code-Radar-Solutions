#include <stdio.h>
#include<string.h>
struct Student
{
    char id[50];
    char name[50];
    int cost;
};

int main()
{
    int num,count1;
    scanf("%d", &num);
    struct Student student[num];
    for(int i=0;i<num;i++){
        scanf("%s",&student[i].id );
        scanf("%s",student[i].name);
        scanf("%d",&student[i].cost);
    }
    scanf("%d",&count1);
    printf("Books above price %.2f:\n",(float)count1);
    for(int i=0;i<num;i++){
        if(student[i].cost>=count1){
            printf("Title: %s, Author: %s, Price: %.2f\n",student[i].id,student[i].name,(float)student[i].cost);
        }
    }
    return 0;
}
