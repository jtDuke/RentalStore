#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
using namespace std;

class Transaction
{

public:
	Transaction();
	virtual ~Transaction();
	virtual bool print() const = 0;
};

#endif