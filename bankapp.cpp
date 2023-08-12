#include <iostream>
#include <iomanip> // Include for setprecision
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(int x, string y, double z) {
        accountNumber = x;
        accountHolder = y;
        balance = z;
    }

    void deposit(double amount) {
        cout << "Amount is being added to the balance" << endl;
        balance += amount;
        cout<<"updated balance:"<<balance<<endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            cout << "Amount is withdrawn from the account" << endl;
            balance -= amount;
            cout<<"updated balance:"<<balance;
        } else {
            cout << "You have insufficient balance" << endl;
        }
    }

    void show() {
        cout << "Account details:" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << fixed << setprecision(2) << balance << endl;
    }
};

int main() {
    BankAccount u(1122, "Ahmad", 500);
    int choice;
    double amount;
    char continueChoice;

    do {
        cout << "Welcome to your bank" << endl;
        cout << "1. Add money" << endl;
        cout << "2. Withdraw money" << endl;
        cout << "3. View account details" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount you want to deposit: ";
                cin >> amount;
                u.deposit(amount);
                break;

            case 2:
                cout << "Enter amount you want to withdraw: ";
                cin >> amount;
                u.withdraw(amount);
                break;

            case 3:
                cout << "Your account details are:" << endl;
                u.show();
                break;

            default:
                cout << "Incorrect choice" << endl;
        }

        cout << "Do you want to perform another operation? (y/n): ";
        cin >> continueChoice;
    } while (continueChoice == 'y' || continueChoice == 'Y');

    cout << "Thank you for using the Bank App!" << endl;
    return 0;
}
