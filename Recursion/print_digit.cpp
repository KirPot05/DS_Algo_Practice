#include <iostream>
using namespace std;

const string digitsWords[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

void printDigit(int n)
{

    if (n == 0)
    {
        return;
    }

    printDigit(n / 10);

    int digit = n % 10;
    cout << digitsWords[digit] << " ";
}

int main(int argc, char const *argv[])
{
    /* code */

    printDigit(240);

    return 0;
}
