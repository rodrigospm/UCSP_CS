/* (Modified Account Class) Modify class Account (Fig 3.8) to provide a member function called withdraw that withdraw money from an Account. Ensure that the withdrawal
amount does not exceed the Account's balance. If it does, the balance should left unchanged and the member function should display a message indicating "Withdrawal amound 
exceeded account balance." Modify AccountTest (Fig 3.9) to test member function withdraw */

#include <iostream>
#include "3.9.h"

using namespace std;

int main() {
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    cout << "account1: " << account1.getName() << " balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance();

    cout << "\n\nEnter deposit amount for account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account balance";
    account1.deposit(depositAmount);

    cout << "\n\naccount1: " << account1.getName() << "balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << "balance is $" << account2.getBalance();

    cout << "\nEnter deposit amount for account2: ";
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account balance";
    account2.deposit(depositAmount);

    cout << "\n\naccount1: " << account1.getName() << "balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << "balance is $" << account2.getBalance() << endl;


    cout << "\n\nEnter withdrawal amount for account1: ";
    int withdrawalAmount;
    cin >> withdrawalAmount;
    cout << "withdrawing " << withdrawalAmount << " to account balance";
    account1.withdraw(withdrawalAmount);

    cout << "\n\naccount1: " << account1.getName() << "balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << "balance is $" << account2.getBalance() ;

    cout << "\nEnter withdrawal amount for account2: ";
    cin >> withdrawalAmount;
    cout << "withdrawing " << withdrawalAmount << " to account balance";
    account2.withdraw(withdrawalAmount);

    cout << "\n\naccount1: " << account1.getName() << "balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << "balance is $" << account2.getBalance() << endl;

}
