#include <iostream>
using namespace std;

bool checkSorted(int arr[], int n)
{
    if (n == 0 || n == 1)
        return true;

    if (arr[0] > arr[1])
        return false;

    return checkSorted(arr + 1, n - 1);
}

int binarySearch(int arr[], int key, int start, int end)
{
    if (start > end)
        return -1;

    int mid = start + (end - start) / 2;

    if (arr[mid] == key)
        return mid;

    else if (arr[mid] < key)
        return binarySearch(arr, key, mid + 1, end);

    return binarySearch(arr, key, start, mid - 1);
}

int main(int argc, char const *argv[])
{
    /* code */
    int arr[] = {1, 8, 9, 34, 36};
    int n = 5;
    int key = 9;

    if (!checkSorted(arr, n))
    {
        cout << "Please enter a valid sorted array" << endl;
        return 0;
    }

    cout << "Element found at index: " << binarySearch(arr, key, 0, n - 1);

    return 0;
}
