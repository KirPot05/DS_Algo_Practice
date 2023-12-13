#include <iostream>

using namespace std;

void printArray(int arr[], int size)
{
    if (size == 0)
        return;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}