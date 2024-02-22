#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid)
{
    int cowCount = 1;
    int lastPos = stalls[0];

    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - lastPos >= mid)
        {
            cowCount++;

            if (cowCount == k)
            {
                return true;
            }

            lastPos = stalls[i];
        }
    }

    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());

    int maxi = INT_MIN, start = 0, ans = -1;

    for (int i = 0; i < stalls.size(); i++)
        maxi = max(maxi, stalls[i]);

    int end = maxi, mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isPossible(stalls, k, mid))
        {
            ans = mid;
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
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
