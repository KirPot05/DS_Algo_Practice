#include "Array.h"

void Merge_Sort(int[], int, int);
void Merge(int[], int, int, int);


int main()
{   
    int arr[] = {6, 1, 3, 2, 8, 4, 7};
    int n = 7;

    Print_Array(arr, n);    

    Merge_Sort(arr, 0, n);
    
    Print_Array(arr, n);

    system("pause");
    return 0;
}

void Merge_Sort(int arr[], int l, int r){

    if(l < r){
        int mid = (l + r) / 2;

        Merge_Sort(arr, l, mid);
        Merge_Sort(arr, mid + 1, r);


        Merge(arr, l, mid, r);
    }

}


void Merge(int arr[], int l, int mid, int r){
        
        int n1 = mid - l + 1;
        int n2 = r - mid;
        int a[n1], b[n2];

        for(int i=0; i<n1; i++){
            a[i] = arr[l + i];
        }

        for(int i=0; i<n2; i++){
            b[i] = arr[mid + 1 + i];
        }

        int i=0, j=0, k=l;

        while(i<n1 && j<n2){

            if(a[i] < b[j]){
                arr[k++] = a[i++];
            }

            else{
                arr[k++] = b[j++];
            }
        }

        while(i<n1){
            arr[k++] = a[i++];
            //i++; k++;
        }
        
        while(j<n1){
            arr[k++] = b[j++];
            //j++; k++;
        }
}