#include <iostream>
using namespace std;

int main()
{
    int age, weight;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter weight: ";
    cin >> weight;

    if (age >= 18)
    {
        if (weight >= 50)
        {
            cout << "Eligible for Blood Donation";
        }
        else
        {
            cout << "Not Eligible: Weight is less than 50 kg";
        }
    }
    else
    {
        cout << "Not Eligible: Age is less than 18 years";
    }

    return 0;
}
