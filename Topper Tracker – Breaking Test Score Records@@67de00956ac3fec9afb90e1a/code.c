#include <stdio.h>

int trackScores(int arr[],int num,int result[]){
    int first_max,first_min,count=0,count2=0,min;
    if(arr[0]>arr[1]){
        min=1;
        first_max=arr[0];
        first_min=arr[1];
    }else{
        min=0;
        first_max=arr[1];
        first_min=arr[0];
    }
    for(int i=0;i<num;i++){
        if(arr[i]>first_max){
            count++;
            first_max=arr[i];
        }
        if(arr[i]>first_min) count2++;
    }
    result[0]=count;
    result[1]=count2;
    return *result ;
}