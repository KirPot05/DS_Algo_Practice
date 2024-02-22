#include <iostream>
#include <vector>

using namespace std;

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

int main(int argc, char const *argv[])
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, val;
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        arr.push_back(val);
    }

    int pivotIndex = findPivot(arr);

    cout << "Pivot element index: " << pivotIndex << endl;
    cout << "Pivot element: " << arr[pivotIndex] << endl;

    return 0;
}
