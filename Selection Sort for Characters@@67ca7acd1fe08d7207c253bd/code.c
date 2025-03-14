#include<stdio.h>
int selectionSort(char arr[],int num){
    for(int i=0;i<num-1;i++){
        char min=i;
        for(int j=i+1;j<num;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        char temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
int printArray(char arr[],int num){
    selectionSort(arr,num);
    for(int i=0;i<num;i++){
        printf("%c ",arr[i]);
    }
}