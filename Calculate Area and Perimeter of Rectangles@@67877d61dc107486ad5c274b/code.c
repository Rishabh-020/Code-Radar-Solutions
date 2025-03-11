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
    for(int i=0;i<num;i++){
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f",i+1,
        (float)(ap[i].lenght)*(ap[i].breadth),(float)2*(ap[i].lenght+ap[i].breadth));
    }
}