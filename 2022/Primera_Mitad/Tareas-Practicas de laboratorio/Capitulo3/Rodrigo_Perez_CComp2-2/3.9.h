/* (Modified Account Class) Modify class Account (Fig 3.8) to provide a member function called withdraw that withdraw money from an Account. Ensure that the withdrawal
amount does not exceed the Account's balance. If it does, the balance should left unchanged and the member function should display a message indicating "Withdrawal amound 
exceeded account balance." Modify AccountTest (Fig 3.9) to test member function withdraw */

#include <string>

class Account {
    public:
        Account(std::string accountName, int initialBalance)
        : name{accountName} {
            if (initialBalance > 0) {
                balance = initialBalance;
            }
        }
        void deposit(int depositAmount) {
            if (depositAmount > 0) {
                balance = balance + depositAmount;
            }
        }
        void withdraw(int withdrawalAmount) {
            if (withdrawalAmount < balance) {
                balance = balance - withdrawalAmount;
            }
            else {
                std::cout << "\nWithdrawal amount exceeded account balance.";
            }
        }
        int getBalance() const {
            return balance;
        }
        void setName(std::string accountName) {
            name = accountName;
        }
        std::string getName() const {
            return name;
        }
    private:
        std::string name;
        int balance{0};
};