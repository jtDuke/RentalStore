#include "Store.h"
#include "Transaction.h"
#include "Borrow.h"

Store::Store()
{
	cout << "Creating Store" << endl;
}

Store::~Store()
{


}

void Store::CreateTrans()
{

	Borrow *b = new Borrow();
	b->print();

}