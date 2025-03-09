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
    int max_freq=0,save;
    for(int i=0;i<count;i++){
        if(freq[unique[i]]>max_freq){
            max_freq=freq[unique[i]];
            save=unique[i];
        }
    }
    printf("%d",save);
    return 0;
}