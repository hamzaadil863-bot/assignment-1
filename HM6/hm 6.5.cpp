#include <iostream>
using namespace std;

int main()
{
    int rating, category;

    cout << "Enter Employee Rating: ";
    cin >> rating;

    if (rating >= 90)
        category = 1;
    else if (rating >= 75)
        category = 2;
    else if (rating >= 50)
        category = 3;
    else
        category = 4;

    switch (category)
    {
        case 1:
            cout << "Performance: Excellent";
            break;

        case 2:
            cout << "Performance: Good";
            break;

        case 3:
            cout << "Performance: Average";
            break;

        case 4:
            cout << "Performance: Poor";
            break;

        default:
            cout << "Invalid Rating";
    }

    return 0;
}
