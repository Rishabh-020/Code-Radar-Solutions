#include <stdio.h>

int main() {
   int num;
   scanf("%d",&num);
   int arr[num];
   for(int i=0;i<num;i++){
    scanf("%d ",&arr[i]);
   }
   int max=arr[0],min=arr[0];
   for(int i=1;i<num;i++){
    if(max<arr[i]){
        max=arr[i];
    }else if(min>arr[i]){
        min=arr[i];
    }
   }
   printf("%d %d",min,max);
    return 0;
}