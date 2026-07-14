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
    else
    {
        if (signal == 'Y' || signal == 'y')
        {
            cout << "Ready";
        }
        else
        {
            if (signal == 'G' || signal == 'g')
            {
                cout << "Go";
            }
            else
            {
                cout << "Invalid Signal";
            }
        }
    }

    return 0;
}
