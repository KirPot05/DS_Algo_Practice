#include <iostream>
using namespace std;
#define endl '\n'

int tilingWays(int n)
{

    if (n == 0 or n == 1)
    {
        return n;
    }

    return tilingWays(n - 1) + tilingWays(n - 2);
}

int main()
{

    cout << tilingWays(4);

    return 0;
}