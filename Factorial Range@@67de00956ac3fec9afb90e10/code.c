#include <stdio.h>
int fact(int num){
    int count=1;
    for(int i=0;i<num;i++){
        count+=count*i;
    }
    return count;
}
int factorialRange(int start,int end){
    if(start>end || start<0 || end<0){
        printf("Invalid range");
        return 0;
    }
    for(int i=start;i<=end;i++){
        printf("%d\n",fact(i));
    }
}