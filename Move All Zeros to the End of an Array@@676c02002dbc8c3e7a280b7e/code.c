#include<stdio.h>
int main(){
    int num,newindex=0;
    scanf("%d",&num);
    int arr[num],new_arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++){
        if(arr[i]!=0){
            new_arr[newindex++]=arr[i];
        }
    }
    while(newindex>num){
        new_arr[newindex++]=0;
    }
    for(int i=0;i<num;i++){
        printf("%d",new_arr[i]);
    }
    return 0;
}