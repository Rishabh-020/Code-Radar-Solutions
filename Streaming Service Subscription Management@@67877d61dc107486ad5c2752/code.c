#include<stdio.h>
#include<string.h>
struct toll{
    char plate[100];
    char name[100];
    int price;
};
int main(){
    int num,count1=0,count2=0,count3=0;
    float c1=0.00,c2=0.00,c3=0.00;
    scanf("%d",&num);
    struct toll t[num];
    for(int i=0;i<num;i++){
        scanf("%s %s %d",&t[i].plate,&t[i].name,&t[i].price);
        if(strcmp(t[i].name,"Basic")==0){
            c1+=t[i].price;
            count1++;
        }else if(strcmp(t[i].name,"Standard")==0){
            c2+=t[i].price;
            count2++;
        }else{
            c3+=t[i].price;
            count3++;
        }
    }
    printf("Basic: %d Users, Revenue: %.2f: Standard: %d Users, Revenue: %.2f: Premium: %d Users, Revenue: %.2f\n"
    ,count1,c1,count2,c2,count3,c3);
}