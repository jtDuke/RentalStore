#include "Transaction.h"
#include "Borrow.h"

Borrow::Borrow()
{
	cout << "Borrow Construct" << endl;
}


Borrow::~Borrow()
{

}

bool Borrow::print() const
{
	cout << "Borrow" << endl;
	return false;
}