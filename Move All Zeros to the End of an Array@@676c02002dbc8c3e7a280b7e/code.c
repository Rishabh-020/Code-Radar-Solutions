#include<stdio.h>
int swap(int a,int b){
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d ",a);
}
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++){
        if(arr[i]==0){
            swap(arr[i],arr[i+1]);
        }else{
            printf("%d",arr[i]);
        }
    }
    return 0;
}