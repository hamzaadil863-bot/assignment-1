#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username;
    int password;
    int login;

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    if (username == "admin" && password == 1234)
        login = 1;
    else
        login = 0;

    switch (login)
    {
        case 1:
            cout << "Login Successful";
            break;

        case 0:
            cout << "Invalid Username or Password";
            break;
    }

    return 0;
}
