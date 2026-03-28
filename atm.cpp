#include <iostream>
using namespace std;

int main() {
    int choice, pin = 1234, userPin;
    float balance = 10000, amount;

    cout << "***** NITTE ATM MACHINE *****\n";
    cout << "1. Deposit\n";
    cout << "2. Withdraw\n";
    cout << "3. Statement\n";
    cout << "4. Balance\n";

    cout << "Select your choice: ";
    cin >> choice;

    switch(choice) {

        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance += amount;
            cout << "Amount Deposited Successfully\n";
            break;

        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            cout << "Enter your PIN: ";
            cin >> userPin;

            if (userPin == pin) {
                if (amount <= balance) {
                    balance -= amount;
                    cout << "Cash Withdrawn Successfully\n";
                } else {
                    cout << "Insufficient Balance\n";
                }
            } else {
                cout << "Wrong PIN\n";
            }
            break;

        case 3:
            cout << "Mini Statement:\n";
            cout << "Current Balance: " << balance << endl;
            break;

        case 4:
            cout << "Your Balance is: " << balance << endl;
            break;

        default:
            cout << "Invalid Choice\n";
    }

    return 0;
}
