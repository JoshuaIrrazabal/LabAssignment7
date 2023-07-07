#include <stdio.h>

void numOfSwaps(int arr[], int n){
    int i, j, tmp, swaps[n];
    for(int i=0; i<n; i++){
        swaps[i]=0;
    }
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                swaps[i]++;                
            }
        }
    }
    for(i=0; i<n; i++){// travels throught the list
        printf("Swap count of index %d: %d\n", i, swaps[i]);
    }
}

int main(){
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(arr)/sizeof(arr[0]); //size of the array
    numOfSwaps(arr, n);
    return 0;
}