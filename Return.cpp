#include "Transaction.h"
#include "Return.h"

Return::Return()
{
	cout << "Return COnstruct" << endl;
}

Return::~Return()
{

}

bool Return::print() const
{
	cout << "Return" << endl;
	return false;
}