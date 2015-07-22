#include <iostream>
#include "account.h"
using namespace std;

int main(){
    try {
        //call function of class Account
        Account a;
        a.getBalance();
        a.deposit(-12.12);
        a.withdraw(14.00);
    }
    catch (negativeAmount){
        cout << "Error: Negaive Amount" << endl;
    }
    try {
        Account b;
        b.getBalance();
        b.deposit(12.12);
        b.withdraw(14.00);
    }

    catch (insufficientFund){
        cout << "Error: Insufficient Funds\n" << endl;

    }

}
