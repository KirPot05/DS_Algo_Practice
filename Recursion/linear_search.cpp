#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    if (size == 0)
        return false;

    if (arr[0] == key)
        return true;

    return search(arr + 1, size - 1, key);
}

int main(int argc, char const *argv[])
{
    /* code */
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    bool found = search(arr, size, 6);
    if (found == false)
        cout << "Element not found" << endl;
    else
        cout << "Element found" << endl;

    return 0;
}
