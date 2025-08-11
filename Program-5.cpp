#include <iostream>
using namespace std;

class Login {
private:
    string username;
    string password;
public:
    Login(string u, string p) : username(u), password(p) {}

    bool authenticate(string iUser, string iPass) {
        if (iUser == username) {
            if (iPass == password) {
                return true;
            }
            else {
                cout << "Incorrect password!\n";
                return false;
            }
        }
        return false;
    }

    string getUsername() {
        return username;
    }
};

int main() {
    Login users[] = {
        Login("Mohit", "1204"),
        Login("xyz","xyz123")
    };

    string enteredUser, enteredPass;
    cout << "=== Login System ===\n";
    cout << "Enter username: ";
    cin >> enteredUser;
    cout << "Enter password: ";
    cin >> enteredPass;

    bool loggedIn = false;
    for (auto &user : users) {
        if (user.authenticate(enteredUser, enteredPass)) {
            cout << "Login successful! Welcome, " << user.getUsername() << "!\n";
            loggedIn = true;
            break;
        }
    }

    if (!loggedIn) {
        cout << "Username not found or password incorrect.\n";
    }

    return 0;
}