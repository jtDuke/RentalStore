#ifndef RETURN_H
#define RETURN_H

#include "Transaction.h"
#include <iostream>

using namespace std;

class Return : public Transaction
{

public:
	Return();
	~Return();

	bool print() const;

private:

};

#endif