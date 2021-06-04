#include "Array.h"



void Wave_Sort(int arr[], int n){

    for(int i=1; i<n; i += 2){

        if(arr[i] > arr[i-1]){
            swap(arr[i], arr[i-1]);
        }

        if(arr[i] > arr[i+1] && i <= n-2){
            swap(arr[i], arr[i+1]);
        }


    }
}


int main(){

    int arr[] = {1, 5, 2, 4, 6, 8, 9};
    int n = 7;

    Print_Array(arr, n);

    Wave_Sort(arr, n);

    Print_Array(arr, n);
    

    return 0;
}