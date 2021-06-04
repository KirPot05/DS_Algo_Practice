#include <deque>
#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{

    deque <int> dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.push_back(5);

    for(auto i : dq){
        cout << i << " ";
    }
    cout << "\n";

    dq.push_front(6);
    dq.push_front(7);
    dq.push_front(8);
    dq.push_front(9);
    dq.push_front(10);

    for(auto i : dq){
        cout << i << " ";
    }
    cout << "\n";


    cout << dq.size() << endl;

    cout << dq.max_size() << endl;

    return 0;
}
