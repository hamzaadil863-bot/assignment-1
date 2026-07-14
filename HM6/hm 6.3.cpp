#include <iostream>
using namespace std;

int main()
{
    int rating;

    cout << "Enter Employee Rating: ";
    cin >> rating;

    if (rating >= 90)
    {
        cout << "Performance: Excellent";
    }
    else if (rating >= 75)
    {
        cout << "Performance: Good";
    }
    else if (rating >= 50)
    {
        cout << "Performance: Average";
    }
    else
    {
        cout << "Performance: Poor";
    }

    return 0;
}
