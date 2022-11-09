#pragma once
#include <iostream>
#include <string>
using namespace std;
class BasicAccount
{
private:
	string ID;
	double balance;
public:
	BasicAccount();
	BasicAccount(string id, double b);
	void set_ID(string id);
	void set_balance(double b);
	string get_ID();
	double get_balance();
	virtual void Withdraw_Money();
	virtual void Deposit_Money();
};