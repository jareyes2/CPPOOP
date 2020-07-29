#ifndef CHECKING_ACCOUNT
#define CHECKING_ACCOUNT
#include<iostream>
#include"account.h"

class CheckingAccount: public Account {
        public:
                //default consructor
                CheckingAccount();

                //parameterized constructor 
                CheckingAccount(double fee, double _balance);

                //destructor
                ~CheckingAccount();

                //mutators
                bool debit(double amount);
		void credit(double amount);

        private:
                double feeForTransaction;

};

#endif
