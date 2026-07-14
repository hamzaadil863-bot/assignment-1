#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 5 == 0)
    {
        cout << "Divisible by 5";
    }
    else if (num % 2 == 0)
    {
        cout << "Divisible by 2 only";
    }
    else
    {
        cout << "Not divisible by 5";
    }

    return 0;
}
