#include <iostream>
#include <vector>

using namespace std;

// Using sieve of erasthothenes
int countPrimes(int n)
{

    int count = 0;
    vector<bool> primes(n + 1, true);

    primes[0] = false;
    primes[1] = false;

    for (int i = 2; i < n; i++)
    {
        if (primes[i])
            count++;

        for (int j = 2 * i; j < n; j += i)
        {

            if (primes[j])
                primes[j] = false;
        }
    }

    return count;
}

int main()
{

    int n;
    cin >> n;

    int count = countPrimes(n);
    cout << "Number of primes: " << count << endl;

    return 0;
}