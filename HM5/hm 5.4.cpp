#include <iostream>
using namespace std;

int main()
{
    float bmi;

    cout << "Enter your BMI: ";
    cin >> bmi;

    if (bmi < 25)
    {
        if (bmi < 18.5)
        {
            cout << "Underweight";
        }
        else
        {
            cout << "Normal";
        }
    }
    else
    {
        cout << "Overweight";
    }

    return 0;
}
