#include<stdio.h>
struct student{
    int id;
    char name[50];
    float num;
};
int main(){
    int num;
    scanf("%d",&num);
    struct student Student[num];
    return 0;
}