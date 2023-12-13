#include <vector>
#include <map>
#include <set>
#include <iostream>

using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    map<int, int> occ;

    for (auto element : arr)
    {
        occ[element]++;
    }

    set<int> occurences;
    for (auto ele : occ)
    {
        occurences.insert(ele.second);
    }

    if (occurences.size() != occ.size())
        return false;

    return true;
}

int main(int argc, char const *argv[])
{
    /* code */
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<int> arr;

    int n, val;
    cin >> n;

    while (n--)
    {
        cin >> val;
        arr.push_back(val);
    }

    bool isArrayUnique = uniqueOccurrences(arr);
    if (isArrayUnique)
    {
        cout << "uniqueOccurrences found in arrray" << endl;
    }
    else
    {
        cout << "No uniqueOccurrences found in arrray" << endl;
    }

    return 0;
}
