#include"Array.h"


void Count_Sort(int[], int);
int max_element(int[]);



int main()
{
    int arr[] = {1, 3, 1, 8, 2, 0, 7, 4, 5};
    int n = 9;

    Print_Array(arr, n);

    Count_Sort(arr, n);

    

    return 0;
}




void Count_Sort(int arr[], int n){

    int k = max_element(arr, n);

    int count[k+1] = {0};


    for(int i=0; i<n; i++){
        count[arr[i]]++;
    }

    for(int i=1; i<=k; i++){
        count[i] += count[i-1];
    }

    int output[n];

    for(int i=n-1; i>=0; i--){

        output[--count[arr[i]]] = arr[i];

    }

    Print_Array(output, n);
}


