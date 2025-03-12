#include<stdio.h>
struct temperature{
    char day[100];
    float temp;
};
int main(){
    float av=0.00;
    struct temperature tempo[7];
    for(int i=0;i<7;i++){
        scanf("%s %f",tempo[i].day,tempo[i].temp);
        av+=tempo[i].temp;
    }
    printf("Average Temperature: %.2f",av/7);
    return 0;
}