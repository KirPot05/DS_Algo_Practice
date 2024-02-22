#include <iostream>
#include <vector>

using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int mid)
{

    int pageSum = 0, studentCount = 1;

    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }

        else
        {
            studentCount++;

            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }

            pageSum = arr[i];
        }
    }
    return true;
}

int findPages(vector<int> &arr, int n, int m)
{
    int ans = -1, start = 0, sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int end = sum;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int main(int argc, char const *argv[])
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    return 0;
}
