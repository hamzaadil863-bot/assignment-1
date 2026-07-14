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
    else
    {
        cout << "Deluxe or Luxury Room Selected";
    }

    return 0;
}
