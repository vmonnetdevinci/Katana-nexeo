#pragma once
#include <vector>
#include <ctime>
#include<string>
#include <iostream>

using namespace std;

enum type {deposit, withdraw};


class Operation
{
private :
	type operation_type;
	tm * ptr_date;
	double amount;
	string comment;


public:
	//definiton of contructors and destructors :
	Operation();
	Operation(type _operation_type, double _amount, string _comment);
	~Operation();

	//declaration of methods
	double GetAmount();
	friend ostream &operator<<(ostream &flux, Operation const& op);

};

