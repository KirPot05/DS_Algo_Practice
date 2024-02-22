#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> &arr, int s, int e, int element)
{
    int start = s, end = e;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == element)
            return mid;

        else if (arr[mid] < element)
            start = mid + 1;
        else
            end = mid - 1;

        mid = start + (end - start) / 2;
    }

    return -1;
}

int findPivot(vector<int> &arr)
{
    int size = arr.size();
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }

        else
        {
            end = mid;
        }

        mid = start + (end - start) / 2;
    }

    return start;
}

int search(vector<int> &arr, int n, int k)
{

    int pivotIndex = findPivot(arr);
    int elementIndex = -1;

    if (arr[pivotIndex] <= k && k <= arr[n - 1])
    {
        elementIndex = binarySearch(arr, pivotIndex, n - 1, k);
    }

    else
    {
        elementIndex = binarySearch(arr, 0, pivotIndex - 1, k);
    }

    return elementIndex;
}

int main(int argc, char const *argv[])
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, k, val;
    cin >> n >> k;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        arr.push_back(val);
    }

    cout << search(arr, n, k);

    return 0;
}
