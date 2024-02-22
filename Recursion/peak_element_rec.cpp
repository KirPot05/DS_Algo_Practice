#include <iostream>
#include <vector>
using namespace std;

int peakElement(vector<int> &arr, int start, int end)
{
    if (start >= end)
    {
        return start;
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] < arr[mid + 1])
    {
        return peakElement(arr, mid + 1, end);
    }

    return peakElement(arr, start, mid);
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {4, 5, 1, 2, 3};

    int peak = peakElement(arr, 0, arr.size() - 1);
    cout << "Peak element: " << arr[peak] << endl;

    return 0;
}
