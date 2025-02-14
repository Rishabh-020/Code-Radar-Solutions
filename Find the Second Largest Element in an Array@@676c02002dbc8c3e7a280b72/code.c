#include <stdio.h>
#include<limits.h>


int main() {
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    int largest=INT_MIN,sec_largest=INT_MIN;
    for(int i=0;i<num;i++){
        if(arr[i]>largest){
            sec_largest=largest;
            largest=arr[i];
        }else if(arr[i]> sec_largest && arr[i]!=largest){
            sec_largest=arr[i];
        }
    }
    if(sec_largest==INT_MIN){
        printf("%d",-1);
    }else{
        printf("%d",sec_largest);
    }
    return 0;
}