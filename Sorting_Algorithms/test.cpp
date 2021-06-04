#include<iostream>

using namespace std;

int main(){

    int arr[] = {7, 1, 3, 2, 5, 4};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    cout << n << endl;


    return 0;
}