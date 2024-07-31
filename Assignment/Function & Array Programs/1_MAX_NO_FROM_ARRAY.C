#include<stdio.h>

max(int arr[], int n){
    int i;
    int max = arr[0];

    for(i=1 ; i<n ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        return max;
    }
}

void main(){
    int arr[] = {684, 654, 646, 648, 849, 864};
    int n = arr[] / arr[0];

    printf("Largest in given array is %d", max(arr, n));
    return 0;
}