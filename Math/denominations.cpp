#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int amount = 1330;

    int denominations[] = {100, 50, 20, 1};

    int num, notesCount;

    for (int i = 0; i < 4; i++)
    {
        num = denominations[i];

        switch (num)
        {
        case 100:
            notesCount = amount / num;
            cout << "Denominations of Rs. 100 required: " << notesCount << endl;
            amount -= (notesCount * num);
            break;

        case 50:
            notesCount = amount / num;
            cout << "Denominations of Rs. 50 required: " << notesCount << endl;
            amount -= (notesCount * num);
            break;

        case 20:
            notesCount = amount / num;
            cout << "Denominations of Rs. 20 required: " << notesCount << endl;
            amount -= (notesCount * num);
            break;

        case 1:
            notesCount = amount / num;
            cout << "Denominations of Rs. 1 required: " << notesCount << endl;
            amount -= (notesCount * num);
            break;
        }
    }

    return 0;
}
