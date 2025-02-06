#include <stdio.h>

int main() {
   int num,target,main=0;
   scanf("%d",&num);
   int arr[num];
   for(int i=0;i<num;i++){
    scanf("%d ",&arr[i]);
   }
   scanf("%d",&target);
   for(int i=0;i<num;i++){
    if(arr[i]==target){
        main=i;
    }
   }
   if(main!=0){
   printf("%d",main);}
   else{
    printf("-1");
   }
    return 0;
}