#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string password;
    cout << " -- PASSWORD STRENGTH CHECKER --\n";
    cout << "Enter Password: ";
    cin >> password;
    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;
    for (char ch : password) {
        if (isupper(ch))
            hasUpper = true;
        else if (islower(ch))
            hasLower = true;
        else if (isdigit(ch))
            hasDigit = true;
        else
            hasSpecial = true;
    } 
    
    cout << "\n-- RESULT --\n";
    if (password.length() >= 8 &&
        hasUpper &&
        hasLower &&
        hasDigit &&
        hasSpecial) {
        cout << "Password Strength : STRONG\n";
    }
        
    else if (password.length() >= 6 &&
             ((hasUpper && hasLower) ||
              (hasDigit && hasSpecial))) {
        cout << "Password Strength : MEDIUM\n";
    }
    else {
        cout << "Password Strength : WEAK\n";
    }
    
    cout << "\nPassword Analysis\n";
    cout << "Length        : " << password.length() << endl;
    cout << "Uppercase     : " << (hasUpper ? "Yes" : "No") << endl;
    cout << "Lowercase     : " << (hasLower ? "Yes" : "No") << endl;
    cout << "Digit         : " << (hasDigit ? "Yes" : "No") << endl;
    cout << "Special Char  : " << (hasSpecial ? "Yes" : "No") << endl;
    return 0;
}
