#include <iostream>

using namespace std;

int squareRoot(int x)
{
    int ans = 0, start = 0, end = x;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (mid * mid == x)
            return mid;

        else if (mid * mid < x)
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

double sqrtDec(int n, int tempSol, int precision)
{
    double factor = 1, ans = tempSol;
    for (int i = 0; i <= precision; i++)
    {
        factor /= 10;
        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }

    return ans;
}

int main(int argc, char const *argv[])
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int x;
    cin >> x;

    cout << "Number: " << x << endl;
    int intRoot = squareRoot(x);
    cout << "Square Root (integer): " << intRoot << endl;

    cout << "Square Root(decimal): " << sqrtDec(x, intRoot, 6) << endl;

    return 0;
}
