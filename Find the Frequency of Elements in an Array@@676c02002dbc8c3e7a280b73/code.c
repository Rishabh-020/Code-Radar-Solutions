#include <stdio.h>

void find_freq(int arr[],int n){
    int visited[n];
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    for(int i=0;i<n;i++){
        if(visited[i]==1)continue;
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                visited[i]=1;
            }
        }
        printf("%d %d\n",arr[i],count);
    }
}

int main() {
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",arr[i]);
    }
    find_freq(arr,num);
    return 0;
}