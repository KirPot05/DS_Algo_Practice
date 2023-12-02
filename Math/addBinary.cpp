#include <iostream>
using namespace std;

string reverse(string n)
{

    int size = n.length();

    for (int i = 0; i < size / 2; i++)
    {
        swap(n[i], n[size - 1 - i]);
    }

    return n;
}

// Int to Char conversion
char to_char(int n)
{
    return n + '0';
}

string addBinary(int a, int b)
{

    int prevCarry = 0;
    string ans;

    while (a && b)
    {

        // Both bits are zero
        if (a % 2 == 0 && b % 2 == 0)
        {

            ans += to_char(prevCarry);
            prevCarry = 0;
        }

        // Either of them is set
        else if ((a % 2 == 0 && b % 2 == 1) or (a % 2 == 1 && b % 2 == 0))
        {

            if (prevCarry)
            {
                ans += '0';
                prevCarry = 1;
            }

            else
            {
                ans += '1';
                prevCarry = 0;
            }
        }

        // Both are set
        else
        {

            ans += to_char(prevCarry);
            prevCarry = 1;
        }

        a /= 10;
        b /= 10;
    }

    while (a)
    {

        if (prevCarry)
        {

            if (a % 2 == 1)
            {
                ans += '0';
                prevCarry = 1;
            }

            else
            {
                ans += '1';
                prevCarry = 0;
            }
        }

        else
        {

            ans += to_char(a % 2);
        }

        a /= 10;
    }

    while (b)
    {

        if (prevCarry)
        {

            if (b % 2 == 1)
            {
                ans += '0';
                prevCarry = 1;
            }

            else
            {
                ans += '1';
                prevCarry = 0;
            }
        }

        else
        {

            ans += to_char(b % 2);
        }

        b /= 10;
    }

    if (prevCarry == 1)
    {
        ans += '1';
    }

    ans = reverse(ans);

    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << addBinary(1101, 1100);

    return 0;
}