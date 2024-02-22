#include <iostream>
using namespace std;

bool search(int arr[], int n, int key)
{
    if (n == 0)
        return false;

    if (arr[0] == key)
        return true;

    return search(arr + 1, n - 1, key);
}

int main(int argc, char const *argv[])
{
    /* code */
    int arr[] = {1, 8, 9, 34, 36};
    int n = 5;
    int key = 19;

    bool elementFound = search(arr, n, key);
    if (elementFound)
    {
        cout << "Element found!" << endl;
    }
    else
    {
        cout << "Element not found!" << endl;
    }
    return 0;
}
