#include <stdio.h>
void find_sum(int arr[],int num,int target){
    int found=0;
    int hash[10000] = {0};
    for (int i = 0; i < num; i++) {
        int complement = target - arr[i];

        if (hash[complement]) { // If complement exists in hash array
            printf("%d %d\n", complement, arr[i]);
            hash[complement] = 0; // Avoid duplicate pairs
        } else {
            hash[arr[i]] = 1; // Mark current number as seen
        }
    }
}
int main() {
    int num;
    scanf("%d",&num);
    int arr[num],target;
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    find_sum(arr,num,target);
    return 0;
}