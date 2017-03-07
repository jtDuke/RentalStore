//------------------------------ TransactionFactory.h -------------------------------
// Transaction Factory class: 
// Includes Features:
//   -- Facilitates creation of Borrow and Return Transactions
//   -- Validates & executes Borrow and Return Transactions
//-----------------------------------------------------------------------------

#ifndef TransactionFactory_H
#define TransactionFactory_H
//#include "BinTree.h"
#include "Transaction.h"
#include <string>
#include <sstream>
#include "Return.h"
#include "Borrow.h"

/*#include "HashTable.h"
#include "Classic.h"
#include "Drama.h"
#include "Comedy.h"*/
using namespace std;

class TransactionFactory
{
public:
	TransactionFactory();
	~TransactionFactory();
	// getter for Transaction Typ
	static char getTransType(string newLine);   

	// creates Borrow Transaction
	static Transaction* createBorrow(string newLine, const char transType, HashTable &accounts);

	// executes Borrow
	static bool executeBorrow(Transaction *&b, BinTree &classTree, BinTree &funTree, BinTree &dramaTree);

	// creates Return Transaction
	static Transaction* createReturn(string newLine, const char transType, HashTable &accounts);

	// executes Return
	static bool executeReturn(Transaction *&b, BinTree &classTree, BinTree &funTree, BinTree &dramaTree, HashTable &ht);
};
#endif