#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    switch (num % 5 == 0)
    {
        case 1:
            cout << "Number is divisible by 5";
            break;

        case 0:
            cout << "Number is not divisible by 5";
            break;
    }

    return 0;
}
