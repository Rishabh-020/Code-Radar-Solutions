#include <stdio.h>

void even_arr(int arr[],int num){
    int even[num];
    int scam=0,finaly=-1;
    for(int i=0;i<num;i++){
        if(arr[i]%2==0){
            even[scam]=arr[i];
            scam++;
        }
    }
    for(int i=0;i<scam-1;i++){
        if(even[i]<even[i+1]){
            finaly=even[i+1];
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