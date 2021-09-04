#include <set>
#include <unordered_set>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    set<int> s;

    for (int i = 1; i <= 10; i++)
    {
        s.insert(i);
    }

    set<int>::iterator it = s.begin();

    while (it != s.end())
    {
        cout << *(it++) << " ";
    }
    cout << endl;

    multiset<int> s1;
    for (int i = 1; i <= 10; i++)
    {
        s1.insert(i);
        if (i == 7)
        {
            s1.insert(7);
        }
    }

    for (int i : s1)
    {
        cout << i << " ";
    }
    cout << endl;

    unordered_set<int> us;

    us.insert(2);
    us.insert(3);
    us.insert(1);

    for (int i : us)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
