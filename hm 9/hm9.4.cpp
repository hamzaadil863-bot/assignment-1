#include <iostream>
using namespace std;

int main()
{
    int income;

    cout << "Enter your income: ";
    cin >> income;

    if (income >= 50000)
    {
        if (income <= 100000)
        {
            cout << "Medium Income";
        }
        else
        {
            cout << "High Income";
        }
    }
    else
    {
        cout << "Low Income";
    }

    return 0;
}
