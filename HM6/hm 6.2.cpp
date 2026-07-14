#include <iostream>
using namespace std;

int main()
{
    int rating;

    cout << "Enter Employee Rating: ";
    cin >> rating;

    if (rating >= 75)
    {
        cout << "Good Performance";
    }
    else
    {
        cout << "Average or Poor Performance";
    }

    return 0;
}
