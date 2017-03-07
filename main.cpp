#include "Transaction.h"
#include "Store.h"
#include "Borrow.h"
#include "Return.h"
#include <iostream>

using namespace std;

int main()
{
	Store store;
	store.CreateTrans();

	Transaction *b = new Borrow;
	b->print();

	Transaction *r = new Return;
	r->print();
}