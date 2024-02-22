#include <iostream>
using namespace std;

void Dec_Print(int n)
{

    if (n == 0)
    {
        return;
    }

    cout << n << endl;

    Dec_Print(n - 1);
}

void Asc_Print(int n)
{

    if (n == 0)
    {
        return;
    }

    cout << n << endl;

    Asc_Print(n - 1);

    cout << n << endl;
}

int main()
{

    Asc_Print(5);

    return 0;
}