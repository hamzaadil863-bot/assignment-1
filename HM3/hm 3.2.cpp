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
    else
    {
        cout << "Not Eligible for Blood Donation";
    }

    return 0;
}
