#include<stdio.h>
struct Employee{
    int id;
    char name[100];
    double salary;
    float bonus;
};
int main(){
    int num;
    scanf("%d",&num);
    struct Employee employee[num];
    for(int i=0;i<num;i++){
         scanf("%d %s %f",&employee[i].id,&employee[i].name,&employee[i].salary);
    }
    for(int i=0;i<num;i++){
        if(employee[i].salary<50000){
            employee[i].bonus=0.1*(float)employee[i].salary;
        }else{
            employee[i].bonus=(float)(5*employee[i].salary)/100;
        }
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n"
        ,employee[i].id,employee[i].name,employee[i].bonus);
    }
}