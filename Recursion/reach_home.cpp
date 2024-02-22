#include <iostream>
using namespace std;

void reachHome(int src, int dest)
{

    if (src == dest)
    {
        cout << "Reached home!" << endl;
        return;
    }

    cout << "Source: " << src << " "
         << "Destination: " << dest << endl;

    reachHome(src + 1, dest);
}

int main(int argc, char const *argv[])
{

    reachHome(1, 10);

    return 0;
}
