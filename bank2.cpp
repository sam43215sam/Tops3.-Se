#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    private:
        string depositorName;
        int accountNumber;
        string accountType;
        double balanceAmount;
    public:
        void setDepositorName(string name) {
            depositorName = name;
        }
        void setAccountNumber(int number) {
            accountNumber = number;
        }
        void setAccountType(string type) {
            accountType = type;
        }
        void setBalanceAmount(double amount) {
            balanceAmount = amount;
        }
        string getDepositorName() {
            return depositorName;
        }
        int getAccountNumber() {
            return accountNumber;
        }
        string getAccountType() {
            return accountType;
        }
        double getBalanceAmount() {
            return balanceAmount;
        }

        void assignInitialValues(string name, int number, string type, double amount) {
            setDepositorName(name);
            setAccountNumber(number);
            setAccountType(type);
            setBalanceAmount(amount);
        }

        void deposit(double amount) {
            balanceAmount += amount;
            cout << "Deposited $" << amount << " successfully." << endl;
            cout << "New Balance Amount: $" << balanceAmount << endl;
        }

        void withdraw(double amount) {
            if (amount > balanceAmount) {
                cout << "Insufficient Balance." << endl;
                cout << "Current Balance Amount: $" << balanceAmount << endl;
                return;
            }

            balanceAmount -= amount;
            cout << "Withdrawn $" << amount << " successfully." << endl;
            cout << "New Balance Amount: $" << balanceAmount << endl;
        }

        void display() {
            cout << "Depositor Name: " << getDepositorName() << endl;
            cout << "Account Number: " << getAccountNumber() << endl;
            cout << "Account Type: " << getAccountType() << endl;
            cout << "Balance Amount: $" << getBalanceAmount() << endl;
        }
};

int main() {
    BankAccount myAccount;

    myAccount.assignInitialValues("John Doe", 123456789, "Savings", 1000.00);

    myAccount.deposit(500.00);
    myAccount.withdraw(200.00);
    myAccount.display();

    return 0;
}
