#include "arrays.h"

void swapAlternate(int arr[], int size)
{

    for (int i = 0; i < size - 1; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    int arr[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Initial Array: " << endl;
    printArray(arr, n);

    swapAlternate(arr, n);

    cout << "Modified Array: " << endl;
    printArray(arr, n);

    return 0;
}