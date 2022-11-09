#include "BasicAccount.h"
BasicAccount::BasicAccount()
{
	balance = 0;
	ID = "0";
}

BasicAccount::BasicAccount(string id, double b)
{
	balance = b;
	ID = id;
}

void BasicAccount::set_ID(string id)
{
	ID = id;
}

void BasicAccount::set_balance(double b)
{
	balance = b;
}

string BasicAccount::get_ID()
{
	return ID;
}

double BasicAccount::get_balance()
{
	return balance;
}

void BasicAccount::Withdraw_Money()
{
	double withdraw = 0;
	cout << "Please Enter The Amount to Withdraw : ";
	cin >> withdraw;
	while (withdraw > balance)
	{
		cout << "Sorry. This is more than what you can withdraw.\n"
			<< "Please Enter The Amount to Withdraw";
		cin >> withdraw;
	}
	withdraw = balance - withdraw;
	balance = (withdraw);
	cout << "thank you" << endl;
	cout << "Account ID: " << ID;
	cout << "New Balance: " << balance;

}

void BasicAccount::Deposit_Money()
{
	double Deposit = 0;
	cout << "Please Enter The Amount to Deposit : ";
	cin >> Deposit;
	while (Deposit < 1)
	{
		cout << "Sorry. This is less than what you can withdraw.\n"
			<< "Please Enter The Amount to Withdraw";
		cin >> Deposit;
	}
	Deposit = balance + Deposit;
	balance = (Deposit);
	cout << "thank you" << endl;
	cout << "Account ID: " << ID;
	cout << "New Balance: " << balance;
}