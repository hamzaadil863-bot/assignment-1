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

    if (username == "admin" && password == 1234)
    {
        cout << "Login Successful";
    }
    else if (username != "admin")
    {
        cout << "Invalid Username";
    }
    else if (password != 1234)
    {
        cout << "Invalid Password";
    }
    else
    {
        cout << "Login Failed";
    }

    return 0;
}
