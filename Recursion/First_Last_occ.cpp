#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int i, int key)
{

    if (i == n)
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;
    }

    return firstOcc(arr, n, i + 1, key);
}

int lastOcc(int arr[], int n, int i, int key)
{

    if (i == n)
    {
        return -1;
    }

    int restArray = lastOcc(arr, n, i + 1, key);

    if (restArray != -1)
    {
        return restArray;
    }

    if (arr[i] == key)
    {
        return i;
    }

    return -1;
}

int main()
{

    int arr[] = {1, 5, 2, 5, 1, 5, 3};
    int n = 7;

    cout << firstOcc(arr, n, 0, 2) << " " << lastOcc(arr, n, 0, 5) << endl;

    return 0;
}