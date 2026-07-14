#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    switch (age >= 18)
    {
        case 1:
            cout << "Eligible for Driving License";
            break;

        case 0:
            cout << "Not Eligible for Driving License";
            break;
    }

    return 0;
}
