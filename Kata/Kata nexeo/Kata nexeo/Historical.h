#pragma once
#include <vector>
#include <ctime>
#include <iostream>
#include<string>
#include "Statement.h";

using namespace std;


class Historical
{
private:
	vector<Statement> statements_historical;
	tm * ptr_creation_date;

public:
	//declaration of contructors and destructors :
	Historical();
	Historical(tm *_creation_date);
	Historical(vector<Statement> _statement_historical, tm *_creation_date);
	~Historical();

	//declaration of methods :
	vector<Statement> GetStatementsHistorical();
	void Add(Statement statement);

	friend ostream &operator<<(ostream &flux, Historical const& hst);
};
