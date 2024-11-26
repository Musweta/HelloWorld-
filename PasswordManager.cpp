#include <iostream>
#include <string>
using namespace std;

int main() {
    string correctPassword = "password123";  // Correct password
    string userInput;                        // Variable to store user input
    int attempts = 0;                        // Counter for incorrect attempts

    while (attempts <= 3) {
        cout << "Enter password: ";
        cin >> userInput;  // Take user input

        if (userInput == correctPassword) {
            cout << "Access granted!" << endl;
            return 0;  // Exit the program if the correct password is entered
        } else {
            attempts++;  // Increment the attempt count
            cout << "Incorrect password. Attempt " << attempts << " of 3." << endl;
        }
    }

    // If the user reaches 3 attempts, the account is blocked
    cout << "Password blocked due to 3 incorrect attempts." << endl;

    return 0;
}
