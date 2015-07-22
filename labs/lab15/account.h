#ifndef ACCOUNT_H
#define ACCOUNT_H

class negativeAmount {};
class insufficientFund {};

class Account {
    private:
        double balance;
    public:
        Account(){
            balance = 0;
        }
        Account(double initialDeposit){
            balance = initialDeposit;
        }
        double getBalance(){
            return balance;
        }
        //returns new balance or -1 if error
        double deposit(double amount) {
            if(amount > 0)
                balance += amount;
            else
                throw(negativeAmount());
            return balance;
        }
        //returns new balance or -1 if invlaid amount
        double withdraw(double amount) {
            if((amount > balance) || (amount < 0))
                throw(insufficientFund());
            else
                balance -= amount;
            return balance;
        }
};


#endif
