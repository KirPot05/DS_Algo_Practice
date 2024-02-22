#include <iostream>
using namespace std;

int getSum(int arr[], int size)
{
    if (size == 0)
        return 0;

    if (size == 1)
        return arr[0];

    return arr[0] + getSum(arr + 1, size - 1);
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = getSum(arr, size);
    cout << "Sum of array: " << sum << endl;

    return 0;
}
