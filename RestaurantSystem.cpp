#include <iostream>
#include <iomanip> // For formatting output

using namespace std;

int main() {
    // Menu items and their prices
    cout << "Welcome to Caffe Delli!" << endl;
    cout << "Here is our menu:" << endl;
    cout << "1. chips kuku - KES 400" << endl;
    cout << "2. rice beans - KES 450" << endl;
    cout << "3. Exit" << endl;

    double cost = 0;
    int choice;

    do {
        // Prompt user to select an option
        cout << "Enter the number of the combi you'd like to order (1-3): ";
        cin >> choice;

        // Process the user's choice
        switch (choice) {
            case 1:
                cout << "You selected chips kuku - KES 400" << endl;
                cost += 400;
                break;
            case 2:
                cout << "You selected rice beans - KES 450" << endl;
                cost += 450;
                break;
            case 3:
                cout << "Thank you for placing an order!" << endl;
                break;
            default:
                cout << "Please select a valid option from the menu." << endl;
        }
    } while (choice != 3);

    // Display the total bill
    cout << "Total cost of selected items: " << cost << endl;
    return 0;
}
