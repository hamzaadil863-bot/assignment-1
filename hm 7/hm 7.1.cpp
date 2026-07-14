#include <iostream>
using namespace std;

int main()
{
    char signal;

    cout << "Enter Signal (R/Y/G): ";
    cin >> signal;

    if (signal == 'R' || signal == 'r')
    {
        cout << "Stop";
    }

    return 0;
}
