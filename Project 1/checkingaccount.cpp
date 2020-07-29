#include<iostream>
#include"checkingaccount.h"
#include"account.h"

//default consructor
CheckingAccount::CheckingAccount() {
	feeForTransaction = 0;
}

//parameterized constructor 
CheckingAccount::CheckingAccount(double fee, double _balance) {
	if(fee < 0) {
		std::cout << "Error feeForTransacton cannot be less than 0" << std::endl;
		feeForTransaction = 0;
	}

	feeForTransaction = fee;
	balance = _balance;
}

//destructor
CheckingAccount::~CheckingAccount() {

}

//mutators
bool CheckingAccount::debit(double amount) {
	bool ableToWithdraw = Account::debit(amount);
	if (ableToWithdraw) {
		balance -= feeForTransaction;
		std::cout << "$" << feeForTransaction << " transaction fee charged." << std::endl;
	}
	else {
		std::cout << "Unable to withdraw amount, no fee processed" << std::endl;
	}
	return true;
}

void CheckingAccount::credit(double amount) {
	Account::credit(amount);
	balance -= feeForTransaction;
	std::cout << "$" << feeForTransaction << " transaction fee charged." << std::endl;
}

