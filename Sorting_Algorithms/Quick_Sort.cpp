#include <iostream>
using namespace std;

void Quick_Sort(int[], int, int);
int partition(int[], int, int);

int main()
{
    int arr[] = {1, 4, 2, 3, 6, 5, 9, 8, 7, 0};
    int n = 9;

    for(int i : arr)
        cout << i << " ";
    cout << endl;

    Quick_Sort(arr, 0, n);

    for(int i : arr)
        cout << i << " ";
    cout << endl;
    
    system("pause");
    return 0;
}


void Quick_Sort(int arr[], int l, int r){

    if(l < r){

        int pi = partition(arr, l, r);

        Quick_Sort(arr, l, pi-1);
        Quick_Sort(arr, pi+1, r);

    }

}

int partition(int arr[], int l, int r){

    int pivot = arr[r];

    int i = l - 1;
    
    for(int j=l; j<r; j++){

        if(arr[j] < pivot){
            //i++;
            swap(arr[++i], arr[j]);
        }

    }

    swap(arr[i+1], arr[r]);

    return i + 1;

}