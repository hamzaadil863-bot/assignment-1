#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num > 0)
    {
        if (num % 5 == 0)
        {
            cout << "Positive and divisible by 5";
        }
        else
        {
            cout << "Positive but not divisible by 5";
        }
    }
    else
    {
        cout << "Number is not positive";
    }

    return 0;
}
