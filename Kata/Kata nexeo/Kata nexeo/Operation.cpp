#include "stdafx.h"
#include "Operation.h"

//definition of contructors and destructors :
Operation::Operation()
{
}

Operation::Operation(type _operation_type, double _amount, string _comment)
{
	this->operation_type = _operation_type;
	this->amount = _amount;
	this->comment = _comment;
	time_t now = time(0);
	this->ptr_date = localtime(&now);
}

Operation::~Operation()
{
}


//definition of methods

double Operation::GetAmount()
{
	return amount;
}

