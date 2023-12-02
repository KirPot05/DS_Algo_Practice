#include <cmath>

// Handle negative number case
long long decBin(int n)
{
    long long ans = 0;
    int bit = 0, i = 0;
    while (n != 0)
    {
        // Checks if LSB is set or not
        bit = n & 1;

        ans = (bit * pow(10, i)) + ans;

        // Handling loop dependent values
        i++;
        n >>= 1;
    }

    return ans;
}

long long binDec(int n)
{
    int digit = 0, i = 0;
    long long ans = 0;

    while (n != 0)
    {
        // Extracting the last digit
        digit = n % 10;

        // If the digit is set, add its value after raising position (value of i) to 2
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }

        i++;
        n /= 10;
    }

    return ans;
}

long long reverse(long long n)
{

    long long ans = 0;
    int digit = 0;
    while (n != 0)
    {
        digit = n % 10;

        ans = (ans * 10) + digit;
        n /= 10;
    }

    return ans;
}