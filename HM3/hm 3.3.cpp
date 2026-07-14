#include <iostream>
using namespace std;

int main()
{
    int age, weight;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter weight: ";
    cin >> weight;

    if (age >= 18 && weight >= 50)
    {
        cout << "Eligible for Blood Donation";
    }
    else if (age < 18)
    {
        cout << "Not Eligible: Age must be 18 or above";
    }
    else if (weight < 50)
    {
        cout << "Not Eligible: Weight must be at least 50 kg";
    }
    else
    {
        cout << "Invalid Input";
    }

    return 0;
}
