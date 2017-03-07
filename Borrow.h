#ifndef BORROW_H
#define BORROW_H

#include "Transaction.h"
#include <iostream>

using namespace std;

class Borrow : public Transaction
{

public:
	Borrow();
	~Borrow();

	bool print() const;

private:

};

#endif