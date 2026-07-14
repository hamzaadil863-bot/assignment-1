#include <iostream>
using namespace std;

int main()
{
    int income, category;

    cout << "Enter your income: ";
    cin >> income;

    if (income < 50000)
        category = 1;
    else if (income <= 100000)
        category = 2;
    else
        category = 3;

    switch (category)
    {
        case 1:
            cout << "Low Income";
            break;

        case 2:
            cout << "Medium Income";
            break;

        case 3:
            cout << "High Income";
            break;

        default:
            cout << "Invalid Income";
    }

    return 0;
}
