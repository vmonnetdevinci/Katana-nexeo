#pragma once
#include <vector>
#include <ctime>
#include <iostream>
#include<string>
#include "Operation.h";

using namespace std;

class Statement
{
private :
	Operation operation;
	double post_operation_balance;

public:
	//declaration of contructors and destructors :
	Statement();
	Statement(Operation _operation, double _post_operation_balance);
	~Statement();

	//declaration of methods
	Operation GetOperation();
	friend ostream &operator<<(ostream &flux, Statement const& stmt);
};

