#include"Array.h"


void DNF_Sort(int[], int);


int main(){

    int arr[] = {1, 0, 2, 1, 0, 0, 2, 1, 2, 2, 1, 0};
    int n = 12;

    Print_Array(arr, n);

    DNF_Sort(arr, n);

    Print_Array(arr, n);

    return 0;
}



void DNF_Sort(int arr[], int n){

    int low = 0, mid = 0, high = n-1;

    while(mid <= high){

        if(arr[mid] == 1){
            mid++;
        }

        else if(arr[mid] == 0){
            swap(arr[mid++], arr[low++]);
        }

        else{
            swap(arr[mid], arr[high--]);
        }

    }
}