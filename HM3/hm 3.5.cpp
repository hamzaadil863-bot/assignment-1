#include <iostream>
using namespace std;

int main()
{
    int age, weight;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter weight: ";
    cin >> weight;

    switch (age >= 18 && weight >= 50)
    {
        case 1:
            cout << "Eligible for Blood Donation";
            break;

        case 0:
            cout << "Not Eligible for Blood Donation";
            break;
    }

    return 0;
}
