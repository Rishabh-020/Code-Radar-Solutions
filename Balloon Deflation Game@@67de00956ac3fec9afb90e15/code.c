#include<stdio.h>
int deflateBalloons(int arr[],int num){
    int count=0;
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<num;i++){
        int find=arr[i];
        for(int j=0;j<num;j++){
            if(arr[j]!=0)
            count++;
            arr[j]-=find;
        }
        if(count!=0)
        printf("%d\n",count);
        else
        return 0;
    }
    count=0;
}