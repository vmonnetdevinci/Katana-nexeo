#include "stdafx.h"
#include "Account.h"


//definition of contructors and destructors :

Account::Account(double initial_amount)
{
	amount = initial_amount;
	historical = Historical();
}

Account::Account(double initial_amount, Historical initial_Historical)
{
	amount = initial_amount;
	historical = initial_Historical;
}

Account::~Account()
{
}


//definition of methods :
double Account::GetBalance()
{
	return amount;
}

Historical Account::GetHistorical()
{
	return historical;
}

void Account::Deposit(double value)
{
	string cmt = "";
	while(value < 0)
	{
		cout << "Value must be positive. Please enter a positive number";
		cin >> double(value);
	}
	amount += value;
	cout << "Would you like to insert a comment linked to this operation ? (Just press \"enter\" if you do not) \n";
	cin.ignore();
	getline(cin, cmt);
	AddToHistorical(deposit, value, cmt);
}

void Account::Withdraw(double value)
{
	string cmt;
	while (value < 0)
	{
		cout << "Value must be positive. Please enter a positive number";
		cin >> double(value);
	}
	amount -= value;
	cout << "Would you like to insert a comment linked to this operation ? (Just press \"enter\" if you do not) \n";
	cin.ignore();
	getline(cin, cmt);
	AddToHistorical(withdraw, -value, cmt);
}

void Account::AddToHistorical(type operation_type, double value, string comment)
{
	Operation operation = Operation(operation_type, value, comment);
	Statement statement = Statement(operation, amount);
	historical.Add(statement);
}
