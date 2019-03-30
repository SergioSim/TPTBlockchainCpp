#include "Transaction.h"
#include "sha256.h"

using namespace std;

Transaction::Transaction(unsigned int nIndexIn, const std::string &sDataIn) :  _index(nIndexIn), _data(sDataIn) {
    _tTime = time(nullptr);
    _hash = calculateHash();
}

string Transaction::calculateHash() const {
    return sha256(std::to_string(_index) + _hash + _prevHash + _data + std::to_string(_tTime));
}

std::ostream& operator<<(std::ostream& os, const Transaction& t)
{
    os << "T{ index: "    << t._index;
    os <<   " data: "     << t._data;
    os <<   " hash: "     << t._hash;
    os <<   " pHash: "    << t._prevHash;
    os <<   " time: "     << std::to_string(t._tTime) << "}";
    return os;
}