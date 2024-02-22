#include "arrays.h"

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    int n = 7;

    printArray(arr, n);
    for (int i = 0; i < n / k; i++)
    {
        swap(arr[i], arr[(i + k) % n]);
    }

    printArray(arr, n);

    return 0;
}