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
    int final_rank=num1-rank;
    for(int k=0;k<num2;k++){
        count=0;
        for(int i=0;i<num1;i++){
            if(palyer[k]>ranked[i]){
                count++;
            }
        }
        if(count==0){
            printf("%d\n",final_rank+1);
        }else{
            printf("%d\n",final_rank-count);
        }
        
    }
    
}