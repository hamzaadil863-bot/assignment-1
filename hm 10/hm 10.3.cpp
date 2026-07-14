#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Enter Room Choice (1-3): ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Standard Room Selected";
    }
    else if (choice == 2)
    {
        cout << "Deluxe Room Selected";
    }
    else if (choice == 3)
    {
        cout << "Luxury Room Selected";
    }
    else
    {
        cout << "Invalid Room Choice";
    }

    return 0;
}
