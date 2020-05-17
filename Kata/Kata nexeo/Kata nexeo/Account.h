#pragma once
#include <vector>
#include <ctime>
#include <iostream>
#include<string>

#include "Operation.h"
#include "Statement.h"
#include "Historical.h"

using namespace std;


class Account
{
private :

	double amount;
	Historical historical;

public:
	//declaration of contructors and destructors :
	Account(double initial_amount = 0); // give the user the possibility to declare an account without any parameter, or only an initial amount
	Account(double initial_amount, Historical initial_historical = Historical()); // give the user the possibility to decalre an account with both initial amount and initial historical
	~Account();

	//declaration of methods
	double GetBalance();
	Historical GetHistorical();

	void Deposit(double value);
	void Withdraw(double value);
	void AddToHistorical(type operation_type, double value, string comment = "");
};

