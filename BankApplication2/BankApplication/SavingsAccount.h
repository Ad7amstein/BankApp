#pragma once
#include "BasicAccount.h"
class SavingsAccount :
    public BasicAccount
{
    double minimum_balance;
public:
    SavingsAccount();
    SavingsAccount(string id2, double b2, double mb);
    void set_min_balance(double b);
    double get_min_balance();
    virtual void Withdraw_Money();
    virtual void Deposit_Money();
};

