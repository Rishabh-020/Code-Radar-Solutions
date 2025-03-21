#include<stdio.h>
int main(){
    int num,max=-1;
    scanf("%d",&num);
    int arr[num],freq[1001]={0};
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
        freq[arr[i]]++;
    }
    for(int i=0;i<1001;i++){
        if(freq[i]>max && freq[i]>(num/2)){
            max=i;
        }
    }
    printf("%d",max);
    return 0;
}