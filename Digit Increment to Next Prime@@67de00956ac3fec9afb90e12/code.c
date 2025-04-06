#include<stdio.h>
int incrementToPrimeDigits(int num){
    int len=1;
    while(num>0){
        // int N=num%10;
        len++;
        num/=10;
    }
    char str[len];
    sprintf(len,"%s",str);
}