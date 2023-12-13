#include <iostream>

using namespace std;

int factorial(int n)
{

    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int combinations(int n, int r)
{
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);

    int ans = numerator / denominator;
    return ans;
}

int main()
{

    int n = 10, r = 2;
    int combination = combinations(n, r);

    cout << "Combination " << n << "C" << r << ": " << combination << endl;

    return 0;
}