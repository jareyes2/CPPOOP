#include<iostream>
#include<vector>
#include"account.h"
#include"savingsaccount.h"
#include"checkingaccount.h"
#include<iomanip>

using namespace std;

int main() {

	SavingsAccount* newsave_ptr = nullptr;
        CheckingAccount* newcheck_ptr = nullptr;

	// pointers to objects of account, savings account, checking account
        vector<Account*> accountList; 
	
	//Variables
	double in_balance, in_fee, in_interestRate;
	int numAccounts = 7;
	cout << setprecision(2) << fixed;

	//loading into vector 
	for(int i = 0; i < numAccounts; i++) {
		if((i%2) == 0) {
			cout << "Checking account " << i << endl;		
			cout << "Please enter the balance: ";
			cin >> in_balance;
			cout << "Please enter the fee: ";
			cin >> in_fee;
			newcheck_ptr = new CheckingAccount(in_fee, in_balance);	
			accountList.push_back(newcheck_ptr);

		}
		else {	
			cout << "Savings Account " << i << endl;
			cout << "Please enter the balance: ";
			cin >> in_balance;
			cout << "Please enter the interestRate: "; 
			cin >> in_interestRate;
			newsave_ptr = new SavingsAccount(in_interestRate, in_balance);
			accountList.push_back(newsave_ptr);
		}
		
	}

	//variables 
	double in_withdraw, in_deposit, interest; 
	
	//accessing vector elements
	for(int j = 0; j < accountList.size(); j++) {
		
		cout << "\n\nAccount " << j << " balance: $" << accountList.at(j)->getBalance() << endl;
		cout << "Enter an amount to withdraw from Account " << j << ": ";
		cin >> in_withdraw;
		accountList.at(j)->debit(in_withdraw);
		cout << "Enter an amount to deposit into Account " << j << ": ";
		cin >> in_deposit; 
		accountList.at(j)->credit(in_deposit);
		
		if((j%2) != 0) { 
			interest = dynamic_cast<SavingsAccount*>(accountList.at(j))->calcInterest();
                        cout << "Adding a $" << interest << " interest to Account " << j << " (a SavingsAccount)" << endl;          
                } 
		cout << "Updated Account " << j << " balance: $" << accountList.at(j)->getBalance() << endl;
	}

	 for(int k = 0; k < accountList.size(); k++) {
		delete accountList.at(k);	
	 }
	 return 0;
}
