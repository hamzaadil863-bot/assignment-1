#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Enter Room Choice (1-3): ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Standard Room Selected";
            break;

        case 2:
            cout << "Deluxe Room Selected";
            break;

        case 3:
            cout << "Luxury Room Selected";
            break;

        default:
            cout << "Invalid Room Choice";
    }

    return 0;
}
