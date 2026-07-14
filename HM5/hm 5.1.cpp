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

    return 0;
}
