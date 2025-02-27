#include<stdio.h>
void is_inc(int arr[],int num){
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            if(arr[i]!<=arr[j]){
                return 0;
            }
        }
    }
    return 1;
}
void is_dec(int arr[],int num){
    int now=1;
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            if(arr[i]!>=arr[j]){
                now=0;
                return 0;
            }
        }
    }
    return 1;
}
void is_dec(int arr[],int num){}

int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    if(is_inc(arr,num)||is_dec(arr,num)){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}