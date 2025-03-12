#include<stdio.h>
struct Employee{
    int id;
    char name[100];
    int salary;
};
int main(){
    int num;
    scanf("%d",&num);
    float bonus[num];
    struct Employee employee[num];
    for(int i=0;i<num;i++){
         scanf("%d %s %d",&employee[i].id,&employee[i].name,&employee[i].salary);
    }
    for(int i=0;i<num;i++){
        if(employee[i].salary<50000){
            bonus[i]=0.1*employee[i].salary;
        }else{
            bonus[i]=(float)(5*employee[i].salary)/100;
        }
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n"
        ,employee[i].id,employee[i].name,bonus[i]);
    }
}