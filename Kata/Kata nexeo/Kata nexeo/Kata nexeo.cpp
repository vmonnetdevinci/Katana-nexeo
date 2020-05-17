// Kata nexeo.cpp : définit le point d'entrée pour l'application console.

#include "stdafx.h"
#include <vector>
#include <ctime>
#include <iostream>
#include<string>

#include "Operation.h"
#include "Statement.h"
#include "Historical.h"
#include "Account.h"

using namespace std;

ostream &operator<<(ostream &flux, Operation const& op)
{
	string type_of_operation;
	if (op.operation_type == withdraw)
		type_of_operation = "WITHDRAW";
	else
		type_of_operation = "DEPOSIT";
		
	flux << "Date : " << op.ptr_date->tm_mday << "/" << 1 + op.ptr_date->tm_mon << "/" << 1900 + op.ptr_date->tm_year << " " << op.ptr_date->tm_hour << ":" << op.ptr_date->tm_min << ":" << op.ptr_date->tm_sec << " | " << "Operation type : " << type_of_operation << "   " << "Amount : " << op.amount << "   " << "Comment : " << op.comment;
	return flux;
}

ostream &operator<<(ostream &flux, Statement const& stmt)
{
	flux << stmt.operation << endl << "Account Balance :" << stmt.post_operation_balance;
	return flux;
}

ostream &operator<<(ostream &flux, Historical const& hst)
{
	flux << "The account historical has been created on :" << hst.ptr_creation_date->tm_mday << "/" << 1 + hst.ptr_creation_date->tm_mon << "/" << 1900 + hst.ptr_creation_date->tm_year << endl << endl;
	for (int i = 0; i < hst.statements_historical.size(); i++)
	{
		flux << hst.statements_historical[i] << endl << endl;
	}
	return flux;	
}


void test()
{
	Account an_account = Account();

	cout << "By default, we have created an account without any initial amount nor historical" << endl;
	int choix = 10;
	while (choix != 0)
	{
		cout << "Enter 1 to book a deposit \nEnter 2 to withdraw money \nEnter 3 to print your account current balance\nEnter 4 to print the account historical transactions\n\nEnter 0 to exit the menu \n\n\n";
		cin >> (int)choix;
		if (choix == 1)
		{
			double amount = 0;
			cout << "What amount would you like to put on you account ?" << endl;
			cin >> (double)amount;
			an_account.Deposit(amount);
		}
		else if (choix == 2)
		{
			double amount = 0;
			cout << "What amount would you like to withdraw ?" << endl;
			cin >> (double)amount;
			an_account.Withdraw(amount);
		}
		else if (choix == 3)
		{
			cout << "Below is your account current balance ?" << endl;
			cout << an_account.GetBalance() << endl << endl;
		}
		else if (choix == 4)
		{
			cout << "What amount would you like to put on you account ?" << endl;
			cout << an_account.GetHistorical();
		}
	}
}

int main()
{
	test();
    return 0;
}

