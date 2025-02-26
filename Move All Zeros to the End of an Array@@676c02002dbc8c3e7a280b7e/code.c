#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scnaf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++){
        printf("%d",arr[i]);
    }
    return 0;
}