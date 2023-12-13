#include "arrays.h"

int findUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans ^= arr[i];
    }

    return ans;
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

    cout << "Unique Element: " << findUnique(arr, n) << endl;

    return 0;
}