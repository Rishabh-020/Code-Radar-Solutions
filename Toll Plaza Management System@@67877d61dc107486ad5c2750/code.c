#include<stdio.h>
struct toll{
    char plate[100];
    char name[100];
    int price;
};
int main(){
    int num,c1=0,c2=0,c3=0;
    scanf("%d",&num);
    struct toll t[num];
    for(int i=0;i<num;i++){
        scanf("%s %s %d",&t[i].plate,&t[i].name,&t[i].price);
        if(t[i].name=="Car"){
            c1+=t[i].price;
        }else if(t[i].name=='Truck'){
            c2+=t[i].price;
        }else{
            c3+=t[i].price;
        }
    }
    for(int i=0;i<num;i++)printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",c1,c2,c3);
}