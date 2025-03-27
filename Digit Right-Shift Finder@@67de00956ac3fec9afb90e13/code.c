int shiftedNumber(int num){
    int find=num1,len=1;
    while(num>0){
        int N=num1%10;
        len++;
        num1/=10;
    }
    char str[len];
    sprintf(str,"%d",num);
    printf("%c",str[0]);
    for(int i=1;i<len;i++){
        printf("%c",str[i]);
    }
}