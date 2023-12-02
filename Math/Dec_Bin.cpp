#include <iostream>
using namespace std;

int decimalTobinary(int n)
{

    int ans = 0, x = 1;

    while (x <= n)
    {
        x <<= 1;
    }

    x >>= 1;

    while (x)
    {
        int lastdigit = n / x;
        n -= x * lastdigit;
        x >>= 1;
        ans = ans * 10 + lastdigit;
    }

    return ans;
}

int binaryTodecimal(int n)
{

    int ans = 0, x = 1;

    while (n)
    {
        int y = n % 10;
        ans += (x * y);
        x <<= 1;
        n /= 10;
    }
    return ans;
}

int main()
{

    cout << binaryTodecimal(101) << endl;

    cout << decimalTobinary(127) << endl;

    return 0;
}