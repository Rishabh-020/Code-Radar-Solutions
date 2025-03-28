#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num],freq[1001]={0};
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
        freq[arr[i]]++;
    }
    int max=-1;
    for(int i=0;i<1001;i++){
        if(freq[i]/2>max && (num/2)<freq[i])
        max=i;
    }
    printf("%d",max);
}













