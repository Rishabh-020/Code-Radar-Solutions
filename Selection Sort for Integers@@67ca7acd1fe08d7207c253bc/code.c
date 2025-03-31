#include<stdio.h>
int selectionSort(int arr[],int num){
    for(int i=0;i<num-1;i++){
        int insert=arr[i];
        for(int j=i+1;j<num;j++){
            if(arr[j]>insert){
                insert=arr[j];
            }
        }
        int temp=arr[i];
        arr[i]=insert;
        insert=temp;
    }
}
int printArray(int arr[],int num){
    selectionSort(arr,num);
    for(int i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
}