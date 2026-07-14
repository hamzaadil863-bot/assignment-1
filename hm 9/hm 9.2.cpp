#include <iostream>
using namespace std;

int main()
{
    int income;

    cout << "Enter your income: ";
    cin >> income;

    if (income > 100000)
    {
        cout << "High Income";
    }
    else
    {
        cout << "Low or Medium Income";
    }

    return 0;
}
