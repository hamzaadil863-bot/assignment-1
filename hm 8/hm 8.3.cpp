#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username;
    int password;

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    if (username == "admin")
    {
        if (password == 1234)
        {
            cout << "Login Successful";
        }
        else
        {
            cout << "Incorrect Password";
        }
    }
    else
    {
        cout << "Invalid Username";
    }

    return 0;
}
