#include <iostream>
using namespace std;

int main()
{
    float bmi;

    cout << "Enter your BMI: ";
    cin >> bmi;

    int category;

    if (bmi < 18.5)
        category = 1;
    else if (bmi < 25)
        category = 2;
    else
        category = 3;

    switch (category)
    {
        case 1:
            cout << "Underweight";
            break;

        case 2:
            cout << "Normal";
            break;

        case 3:
            cout << "Overweight";
            break;

        default:
            cout << "Invalid BMI";
    }

    return 0;
}
