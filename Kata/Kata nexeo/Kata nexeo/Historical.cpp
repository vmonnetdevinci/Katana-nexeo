#include "stdafx.h"
#include "Historical.h"

//definition of contructors and destructors :
Historical::Historical()
{
	vector<Statement> _statements_historical;
	statements_historical = _statements_historical;

	time_t now = time(0);
	tm *ptr_date = localtime(&now);
	ptr_creation_date = ptr_date;
}

Historical::Historical(tm *_ptr_creation_date)
{
	vector<Statement> _statements_historical;
	statements_historical = _statements_historical;
	ptr_creation_date = _ptr_creation_date;
}

Historical::Historical(vector<Statement> _statement_historical, tm *ptr__creation_date)
{
	statements_historical = _statement_historical;
	ptr_creation_date = ptr_creation_date;
}

Historical::~Historical()
{
}

//definition of methods :
vector<Statement> Historical::GetStatementsHistorical()
{
	return statements_historical;
}

void Historical::Add(Statement statement)
{
	this->statements_historical.push_back(statement);
}


