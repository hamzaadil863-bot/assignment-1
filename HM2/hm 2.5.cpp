#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    switch (num % 2 == 0 && num % 3 == 0)
    {
        case 1:
            cout << "Number is divisible by both 2 and 3";
            break;

        case 0:
            cout << "Number is not divisible by both 2 and 3";
            break;
    }

    return 0;
}
