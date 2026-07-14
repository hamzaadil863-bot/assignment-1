#include <iostream>
using namespace std;

int main()
{
    int rating;

    cout << "Enter Employee Rating: ";
    cin >> rating;

    if (rating >= 50)
    {
        if (rating >= 75)
        {
            if (rating >= 90)
            {
                cout << "Performance: Excellent";
            }
            else
            {
                cout << "Performance: Good";
            }
        }
        else
        {
            cout << "Performance: Average";
        }
    }
    else
    {
        cout << "Performance: Poor";
    }

    return 0;
}
