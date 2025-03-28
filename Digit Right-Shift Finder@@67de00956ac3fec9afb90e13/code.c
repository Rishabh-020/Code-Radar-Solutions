#include<stdlib.h>
int digitRightShift(int num){
    int num1=num,len=1;
    while(num1>0){
        int N=num1%10;
        len++;
        num1/=10;
    }
    // printf("%d",len);
    char str[len];
    sprintf(str,"%d",num);
    // printf("%c",str[len-2]);
    // for(int i=0;i<len-2;i++)printf("%c",str[i]);
    // printf("\n");
    char new_arr[len];
    new_arr[0]=str[len-2];
    printf("%c\n",new_arr[0]);
    for(int i=0;i<len-2;i++)new_arr[i+1]=str[i];
    return atoi(new_arr);
}