#include<iostream>
#include"account.h"
#include"savingsaccount.h"

//default consructor
SavingsAccount::SavingsAccount() {
	interestRate = 0;
}
	
//parameterized constructor 
SavingsAccount::SavingsAccount(double _interestRate, double _balance) {
	interestRate = _interestRate;
	if(interestRate < 0) {
		std::cout << "Error: interest rate cannot be below zero." << std::endl;
		interestRate = 0;
	}
	else if(interestRate > 1) {
		std::cout << "Error: interest rate cannot excede one." << std::endl;
		interestRate = 1;
	}

	balance = _balance;
}

//destructor
SavingsAccount::~SavingsAccount() {
}
	
//accessors
double SavingsAccount::calcInterest() {
	double totalInterest; 
	totalInterest = balance * interestRate;
	balance += totalInterest;
	return totalInterest;
}
