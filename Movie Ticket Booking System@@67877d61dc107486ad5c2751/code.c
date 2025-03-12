#include<stdio.h>
#include<string.h>
struct toll{
    char plate[100];
    char name[100];
    int price;
};
int main(){
    int num;
    float c1=0.00,c2=0.00,c3=0.00;
    scanf("%d",&num);
    struct toll t[num];
    for(int i=0;i<num;i++){
        scanf("%s %s %d",&t[i].plate,&t[i].name,&t[i].price);
        if(strcmp(t[i].name,"Standard")==0){
            c1+=t[i].price;
        }else if(strcmp(t[i].name,"Premium")==0){
            c2+=t[i].price;
        }else{
            c3+=t[i].price;
        }
    }
    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f\n",c1,c2,c3);
}