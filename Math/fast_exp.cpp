#include <iostream>
using namespace std;

// To return (a ^ b) % m
int modularExpoItr(int a, int b, int m = 1e9)
{
    int result = 1;

    while (b > 0)
    {
        if (b & 1)
            result *= a;

        a *= a;
        b >>= 1;
    }
    return result;
}

int main(int argc, char const *argv[])
{

    int num, exp;
    cout << "Enter number: " << endl;
    cin >> num;

    cout << "Enter exponent: " << endl;
    cin >> exp;

    int result = modularExpoItr(num, exp);
    cout << "Result : " << result << endl;
    return 0;
}
