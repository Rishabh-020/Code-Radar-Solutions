#include<stdio.h>
struct Rectagle{
    int lenght;
    int breadth;
};
int main(){
    int num;
    scanf("%d",&num);
    struct Rectagle ap[num];
    for(int i=0;i<num;i++){
        scanf("%d",&ap[i].lenght);
        scanf("%d",&ap[i].breadth);
    }
    float cal=0.00;
    for(int i=0;i<num;i++){
        printf("Rectagle %d: Area = %.2f, Perimeter = %.2f",i+1,
        ap[i].lenght*ap[i].breadth,2*(ap[i].lenght+ap[i].breadth));
    }
}