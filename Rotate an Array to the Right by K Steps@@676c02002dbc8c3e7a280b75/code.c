#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)scanf("%d",&arr[i]);
    int index;
    scanf("%d",&index);
    if(index>num){
        index-=num;
    }
    for(int i=num-index;i<num;i++)printf("%d ",arr[i]);
    for(int i=0;i<num-index;i++)printf("%d ",arr[i]);
}













