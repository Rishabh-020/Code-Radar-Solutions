#include<stdio.h>
int is_inc(int arr[],int num){
    int now=1;
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            if(arr[i]<=arr[j]){
                now=1;
            }else{
                return 0;
            }
        }
    }
    return 1;
}
int is_dec(int arr[],int num){
    int now=1;
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            if(arr[i]>=arr[j]){
                now=0;
            }
            else{
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<=num;i++){
        scanf("%d",&arr[i]);
    }
    if(is_inc(arr,num)||is_dec(arr,num)){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}