// Input a string of length less than 10 and convert it into integer without using builtin function.
#include <iostream>
using namespace std;

int stringToInt(string s) {
    int result = 0;

    for (int i = 0; i < s.length(); i++) {
        // Convert character to digit (e.g., '3' -> 3)
        int digit = s[i] - '0';

        // Optional: validate if it's a digit
        if (digit < 0 || digit > 9) {
            cout << "Invalid character in input string.\n";
            return -1;
        }

        result = result * 10 + digit;
    }

    return result;
}

int main() {
    string str;
    cout << "Enter a number (length < 10): ";
    cin >> str;

    int number = stringToInt(str);
    cout << "Converted integer: " << number << endl;

    return 0;
}
