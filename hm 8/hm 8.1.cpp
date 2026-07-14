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

    return 0;
}
