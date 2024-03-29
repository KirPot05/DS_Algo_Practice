#include <iostream>
using namespace std;

bool sorted(int arr[], int n)
{

    if (n == 1)
    {
        return true;
    }

    bool restArray = sorted(arr + 1, n - 1);

    return (arr[0] < arr[1] && restArray);
}

int main()
{
    int arr[] = {1, 3, 4, 5, 8};
    int n = 5;

    if (sorted(arr, n))
    {
        cout << "Array is Sorted!!";
    }
    else
    {
        cout << "Jumbled Array";
    }

    return 0;
}