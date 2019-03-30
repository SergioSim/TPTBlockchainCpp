#include <iostream>
#include "Transaction.h"

using namespace std;


int main() {
    cout << "hello worlds" << endl;
    Transaction t0(0 , "somedata");
    Transaction t1(0 , "somedata1");
    Transaction t2(0 , "somedata2");
    Transaction t3(0 , "somedata3");
    Transaction t4(0 , "somedata4");
    Transaction t5(0 , "somedata5");
    Transaction t6(0 , "somedata6");
    cout << t0 << endl; 
    cout << t1 << endl;
    cout << t2 << endl;
    cout << t3 << endl;
    cout << t4 << endl;
    cout << t5 << endl;
    cout << t6 << endl;
    return 0;
}