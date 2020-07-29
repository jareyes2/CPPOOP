#ifndef SAVINGS_ACCOUNT
#define SAVINGS_ACCOUNT
#include<iostream>
#include"account.h"

class SavingsAccount: public Account {
	public: 
		//default consructor
		SavingsAccount();
	
		//parameterized constructor 
		SavingsAccount(double interestRate, double balance);

		//destructor
		~SavingsAccount();
	
		//accessors
		 virtual double calcInterest();

	private:
		double interestRate;

};

#endif

