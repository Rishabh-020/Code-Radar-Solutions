#include <stdio.h>

void even_arr(int arr[],int num){
    int even[num],scam=0,finaly=-1;
    for(int i=0;i<num;i++){
        if(arr[i]%2==0){
            even[scam]=arr[i];
            scam++;
        }
    }
    for(int i=0;i<scam-1;i++){
        if(arr[i]>arr[i+1]){
            finaly=arr[i];
            break;
        }
    }
    printf("%d",finaly);
}

int main() {
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    even_arr(arr,num);
    return 0;
}