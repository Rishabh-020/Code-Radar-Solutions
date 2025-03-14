#include<stdio.h>
#include<string.h>
int selectionSort(char arr[][100],int num){
    char temp[100];
    for(int i=0;i<num-1;i++){
        int min=i;
        for(int j=i+1;j<num;j++){
            if(strcmp(arr[min],arr[j])>0){
                min=j;
            }
        }strcpy(temp,arr[i]);
        strcpy(arr[i],arr[min]);
        strcpy(arr[min],temp);
    }
}
int printArray(char arr[][100],int num){
    selectionSort(arr,num);
    for(int i=0;i<num;i++){
        printf("%s\n",arr[i]);
    }
}