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
};

int main() {
    BankAccount myAccount;

    myAccount.setDepositorName("John Doe");
    myAccount.setAccountNumber(123456789);
    myAccount.setAccountType("Savings");
    myAccount.setBalanceAmount(1000.00);

    cout << "Depositor Name: " << myAccount.getDepositorName() << endl;
    cout << "Account Number: " << myAccount.getAccountNumber() << endl;
    cout << "Account Type: " << myAccount.getAccountType() << endl;
    cout << "Balance Amount: $" << myAccount.getBalanceAmount() << endl;

    return 0;
}
