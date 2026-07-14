#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        if (num % 3 == 0)
        {
            cout << "Number is divisible by both 2 and 3";
        }
        else
        {
            cout << "Number is divisible by 2 only";
        }
    }
    else
    {
        cout << "Number is not divisible by 2";
    }

    return 0;
}
