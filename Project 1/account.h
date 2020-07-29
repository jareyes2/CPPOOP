#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<iostream>

class Account {
	public:
		//default constructor 
		Account();

		//parameterized cons
		Account(double _balance);  

		//destructor
		~Account();
		
		//accesors
		double getBalance();
					
		//Mutator
		virtual bool debit(double withdraw);
		virtual void credit(double deposit);

	protected:
		double balance;	
};

#endif
