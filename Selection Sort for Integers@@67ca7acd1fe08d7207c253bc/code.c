#include<stdio.h>
int selectionSort(int arr[],int num){
    for(int i=0;i<num-1;i++){
        int insert=arr[i];
        for(int j=0;j<num;j++){
            if(arr[j]>insert){
                int temp=arr[j];
                arr[j]=insert;
                insert=temp;
            }
        }
    }
}
int printArray(int arr[],int num){
    selectionSort(arr,num);
    for(int i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
}