#include<stdio.h>
void deflateBalloons(int arr[],int num){
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
    printf("%d\n",num); 
    for(int i=0;i<num;i++){
        if(arr[i]==0)
        continue;
        int find=arr[i];
        for(int j=0;j<num;j++){
            if(arr[j]!=0)
            arr[j]=arr[j]-find;
        }
        count=0;
        for(int j=0;j<num;j++){
            if(arr[j]>0)count++;
        }
        if(count>0)printf("%d\n",count);
    }
}