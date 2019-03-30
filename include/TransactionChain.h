#ifndef TESTCHAIN_TRANSACTIONCHAIN_H
#define TESTCHAIN_TRANSACTIONCHAIN_H

#include <vector>
#include "Transaction.h"

using namespace std;

class TransactionChain {
public:
    TransactionChain();
    void addTransaction(Transaction t);
    friend std::ostream& operator<<(std::ostream& os, const TransactionChain& t);
private:
    Transaction getLastTransaction() const;
    vector<Transaction> _vChain;
};

std::ostream& operator<<(std::ostream& os, const TransactionChain& t);

#endif //TESTCHAIN_TRANSACTIONCHAIN_H