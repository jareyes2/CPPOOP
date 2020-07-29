#include "account.h"

//default constructor
Account::Account(){
	balance = 0;

}

Account::Account(double _balance){ 
	if(_balance < 0) {
		std::cout << "Error, balance cannot be below zero" << std::endl;
		std::cout << "Current Balance: " << balance << std::endl;
	}
	balance = _balance;
}

Account::~Account(){
}

//accesors
double Account::getBalance(){
	return balance;
}

//Mutator
bool Account::debit(double withdraw) {
	if(withdraw > balance) {
		std::cout << "Debit amount exceeded account balance." << std::endl;
		return false;
	}
	balance -= withdraw;
	return true;
}

void Account::credit(double deposit) { 
        balance += deposit;
}

