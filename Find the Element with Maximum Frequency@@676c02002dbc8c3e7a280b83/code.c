#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num],freq[1001]={0};
    int unique[num],count=0;
    for(int i=0;i<num;i++)scanf("%d",&arr[i]);
    for(int i=0;i<num;i++){
        if(freq[arr[i]]==0)unique[count++]=arr[i];
        freq[arr[i]]++;
    }
    for(int i=0;i<num;i++){
        printf("%d ",freq[i]);
    }
    return 0;
}