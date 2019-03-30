#include <iostream>
#include "Transaction.h"
#include "TransactionChain.h"

using namespace std;


int main() {
    cout << "hello worlds" << endl;
    Transaction t1(1 , "somedata1");
    Transaction t2(2 , "somedata2");
    Transaction t3(3 , "somedata3");
    Transaction t4(4 , "somedata4");
    Transaction t5(5 , "somedata5");
    Transaction t6(6 , "somedata6");
    cout << t1 << endl;
    cout << t2 << endl;
    cout << t3 << endl;
    cout << t4 << endl;
    cout << t5 << endl;
    cout << t6 << endl;
    TransactionChain tchain;
    tchain.addTransaction(t2);
    tchain.addTransaction(Transaction(3, "lastTransaction"));
    cout << tchain;
    return 0;
}