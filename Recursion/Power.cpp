#include <iostream>
using namespace std;
#define int long long

int power(int base, int exp)
{

    if (exp == 0)
    {
        return 1;
    }

    return base * power(base, exp - 1);
}

int fastPow(int a, int b)
{

    if (b == 0)
    {
        return 1;
    }

    int res = fastPow(a, b / 2);

    if (b & 1)
    {
        return res * res * a;
    }

    else
    {
        return a * a;
    }
}

int32_t main()
{

    cout << power(5, 35) << endl;
    cout << power(2, 63) - 1 << endl;
    cout << LLONG_MAX << endl;
    // cout << fastPow(5, 4);

    return 0;
}