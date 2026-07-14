#include <iostream>
using namespace std;

int main()
{
    float bmi;

    cout << "Enter your BMI: ";
    cin >> bmi;

    if (bmi < 18.5)
    {
        cout << "Underweight";
    }
    else if (bmi >= 18.5 && bmi < 25)
    {
        cout << "Normal";
    }
    else
    {
        cout << "Overweight";
    }

    return 0;
}
