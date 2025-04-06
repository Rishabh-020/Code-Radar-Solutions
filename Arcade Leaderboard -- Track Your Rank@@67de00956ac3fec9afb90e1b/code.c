#include<stio.h>
int trackPlayerRanks(int ranked[],int num1,int palyer[],int num2,int result[]){
    int count=0;
    for(int k=0;k<num2;k++){
        for(int i=1;i<num1;i++){
            if(i==0){
                if(palyer[k]<ranked[i]){
                count++;
                }
            }
            else if(palyer[k]<ranked[i] && ranked[i]!=ranked[i-1]){
                count++;
            }
            else continue;
        }
        printf("%d\n",count);
    }
    
}