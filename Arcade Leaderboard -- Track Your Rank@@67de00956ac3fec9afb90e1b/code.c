#include<stdio.h>
int trackPlayerRanks(int ranked[],int num1,int palyer[],int num2,int result[]){
    int count=0,rank=0;
    for(int i=0;i<num1;i++){
        for(int j=i+1;j<num1;j++){
            if(ranked[i]==ranked[j]){
                rank++;
            }
        }
    }
    int new_arr[num2];
    // printf("%d\n",rank);
    int final_rank=num1-rank;
    for(int k=0;k<num2;k++){
        count=0;
        for(int i=0;i<num1;i++){
            if(palyer[k]>ranked[i]){
                count++;
            }
        }
        if(count==0){
            new_arr[k]=final_rank+1;
        }else{
            new_arr[k]=final_rank-count;
        }
    }
    
}