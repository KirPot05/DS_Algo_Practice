#include <iostream>
using namespace std;
#define endl '\n'

int friends(int n)
{

    if (n >= 0 && n <= 2)
    {
        return n;
    }

    return friends(n - 1) + friends(n - 2) * (n - 1);
}

int main()
{

    cout << friends(3) << endl;

    return 0;
}