#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "Eligible for Driving License";
    }
    else if (age >= 16)
    {
        cout << "Wait until you are 18 years old";
    }
    else
    {
        cout << "Not Eligible for Driving License";
    }

    return 0;
}
