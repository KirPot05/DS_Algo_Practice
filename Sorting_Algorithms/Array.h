#include<iostream>

using namespace std;


void Print_Array(int arr[], int n){

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    

}

void Input_Array(int arr[], int n){

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
}

int max_element(int arr[], int n){

    int element = arr[0];

    for(int i=0; i<n; i++){
        element = max(element, arr[i]);
    }

    return element;

}