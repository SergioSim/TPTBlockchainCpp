#include "TransactionChain.h"

TransactionChain::TransactionChain()
{
    _vChain.emplace_back(Transaction(0, "Genesis Block"));
}

void TransactionChain::addTransaction(Transaction t)
{
    t.setPrevHash(getLastTransaction().getHash());
    _vChain.push_back(t);
}

Transaction TransactionChain::getLastTransaction() const
{
    return _vChain.back();
}

std::ostream& operator<<(std::ostream& os, const TransactionChain& tc)
{
    for(unsigned int i = 0; i < tc._vChain.size(); i++)
    {
        os << tc._vChain[i] << endl;
    }
    return os;
}