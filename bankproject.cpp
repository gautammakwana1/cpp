#include <iostream>
#include <string>
using namespace std;
class BankAccount 
{
    private:
        double balance;

    public:
        void deposit(double amount) 
        {
           if (amount > 0) 
           {
                balance += amount;
                cout << "Deposit successful. New balance: " << balance << endl;
            }
            else 
            {
                cout << "Invalid deposit amount." << endl;
            }
        }

        void withdraw(double amount) 
        {
            if (amount > 0 && amount <= balance) 
            {
                balance -= amount;
                cout << "Withdrawal successful. New balance: " << balance << endl;
            } 
            else 
            {
                cout << "Invalid withdrawal amount." << endl;
            }
        }

        double getBalance() const 
        {
            return balance;
        }
};

int main() {
    BankAccount account;

    int choice;
    double amount;

    do {
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter deposit amount: ";
                cin >> amount;
                account.deposit(amount);
                break;

            case 2:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                account.withdraw(amount);
                break;

            case 3:
                cout << "Account balance: " << account.getBalance() << endl;
                break;

            case 4:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}