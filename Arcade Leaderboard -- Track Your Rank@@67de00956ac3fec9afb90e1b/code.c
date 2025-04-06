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
    int unique[num1],size=0;
    for(int i=0;i<num2;i++){
        bool isunique=false;
        for(int j=i+1;j<num2;j++){
            if(ranked[i]==unique[i]){
                isunique=true;
                break;
            }
            if(!isunique){
                unique[size]=ranked[i];
                size++;
            }
        }
    }
    int final_rank=num1-rank;
    for(int k=0;k<num2;k++){
        count=0;
        for(int i=0;i<size;i++){
            if(palyer[k]>unique[i]){
                count++;
            }
        }
        if(count==0){
            result[k]=final_rank+1;
        }else{
            result[k]=final_rank-count+1;
        }
    }
}