#include "stdafx.h"
#include "Statement.h"

//definition of contructors and destructors :

Statement::Statement()
{
}

Statement::Statement(Operation _operation, double _post_operation_balance)
{
	operation = _operation;
	post_operation_balance = _post_operation_balance;
}

Statement::~Statement()
{
}


//definition of methods
Operation Statement::GetOperation()
{
	return operation;
}


