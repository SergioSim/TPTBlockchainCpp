#ifndef BLOCKCHAIN_TRANSACTION_H
#define BLOCKCHAIN_TRANSACTION_H

#include <iostream>
#include <ctime>

class Transaction {
public:
    Transaction(unsigned int index, const std::string &data);
    std::string getHash() const;
    std::string getPrevHash() const;
    void setHash(std::string hash);
    void setPrevHash(std::string hash);
    friend std::ostream& operator<<(std::ostream& os, const Transaction& t);
private:
    std::string calculateHash() const;
    unsigned int _index;
    std::string _hash;
    std::string _prevHash;
    std::string _data;
    time_t _tTime;
};

std::ostream& operator<<(std::ostream& os, const Transaction& t);

#endif //BLOCKCHAIN_TRANSACTION_H