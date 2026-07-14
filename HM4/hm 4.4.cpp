#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        if (age >= 60)
        {
            cout << "Eligible (Senior Citizen)";
        }
        else
        {
            cout << "Eligible for Driving License";
        }
    }
    else
    {
        cout << "Not Eligible for Driving License";
    }

    return 0;
}
