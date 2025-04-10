#include<stdlib.h>
#include<stdio.h>
int function(int num){
    if(num>7){
        return 2;
    }
    if(num<3){
        return 2;
    }
    if(num>3 && num<5){
        return 3;
    }
    if(num>5 && num<7){
        return 5;
    }
    return num;
}
int incrementToPrimeDigits(int num){
    int len=1,find=num;
    while(num>0){
        // int N=num%10;
        len++;
        num/=10;
    }
    int arr[len],i=0;
    // sprintf(str,"%d",num);
    while(find>0){
        int ne=find%10;
        arr[i]=ne;
        i++;
        find/=10;
    }
    for(int i=0;i<num;i++){
        int pass=arr[i];
        function(pass);
        arr[i]=pass;
    }
}