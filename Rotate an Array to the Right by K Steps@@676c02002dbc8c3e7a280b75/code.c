#include <stdio.h>
int main() {
    int num,num2;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&num2);
    num2=num2%num;
    if(num2<0){
        num2=(num+num2)%num;
    }
    for(int i=num2;i<num;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<num2;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}