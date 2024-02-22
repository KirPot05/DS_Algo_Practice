#include <iostream>
#include <vector>

using namespace std;

int peakElement(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
            start = mid + 1;

        else
            end = mid;

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

    int peakIndex = peakElement(arr);
    cout << "Index of peak element: " << peakIndex << endl;
    cout << "Peak Element: " << arr[peakIndex] << endl;

    return 0;
}
