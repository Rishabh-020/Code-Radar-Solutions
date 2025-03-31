#include <stdio.h>
int main() {
   int num,binary[32],index=0;
   scanf("%d",&num);
   if(num==0){
    printf("%d",0);
    return 0;
   }
   while(num>0){
    binary[index]=num%2;
    index++;
    num/=2;
   }
   for(int i=index-1;i>=0;i--)printf("%d",binary[i]);
    return 0;
}