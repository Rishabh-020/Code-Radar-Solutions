#include<stdio.h>
#include<string.h>
void insertionSort(char arr[][100],int n){
    char temp[100];
    for(int i=1;i<n;i++){
        strcpy(temp,arr[i]);
        int prev=i-1;
        while(prev>=0 &&  strcmp(arr[prev],temp)>0){
            strcpy(arr[prev+1],arr[prev]);
            prev--;
        }
        strcpy(arr[prev+1],temp);
    }
}
int printArray(char arr[][100],int n){
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}