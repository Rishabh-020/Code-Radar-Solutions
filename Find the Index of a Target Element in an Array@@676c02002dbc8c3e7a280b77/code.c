#include <stdio.h>

int main() {
   int num;
   scanf("%d",&num);
   int arr[num];
   int target;
   for(int i=0;i<num;i++){
    scanf("%d ",&arr[i]);
   }
   for(int i=0;i,num;i++){
    if(arr[i]==target){
        printf("%d",i);
        return 0;
    }
   }
   printf("%d",-1);
    return 0;
}