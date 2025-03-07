#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b){
    return *(int*)a + *(int*)b;
}
int insertionSort(int arr,int n){
    qsort(arr,n,sizeof(int),compare);
}
int printArray(int arr,int n){
    insertionSort(arr,n);
    for(int i=0;i<n;i++)printf("%d",arr[i]);
}