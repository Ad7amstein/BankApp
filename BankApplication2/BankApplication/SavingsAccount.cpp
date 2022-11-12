#include "SavingsAccount.h"
#include"BasicAccount.h"

SavingsAccount::SavingsAccount()
{
	minimum_balance = 1000;
}

SavingsAccount::SavingsAccount(string id2, double b2, double mb) : BasicAccount(id2, b2)
{
	minimum_balance = mb;
	while (b2 < mb)
	{
		cout << "Initial balance should be >= min balance." << endl;
		cout << "Please enter the initial balance : ";
		cin >> b2;
	}
	this->set_balance(b2);
}

void SavingsAccount::set_min_balance(double b)
{
	minimum_balance = b;
}

double SavingsAccount::get_min_balance()
{
	return minimum_balance;
}

void SavingsAccount::Withdraw_Money()
{
	double withdraw = 0;
	cout << "Please Enter The Amount to Withdraw : ";
	cin >> withdraw;
	while (withdraw > (this->get_balance() - minimum_balance))
	{
		cout << "Sorry. This is more than what you can withdraw.\n"
			<< "Please Enter The Amount to Withdraw";
		cin >> withdraw;
	}
	withdraw = this->get_balance() - withdraw;
	this->set_balance(withdraw);
	cout << "thank you" << endl;
	cout << "Account ID: " << this->get_ID();
	cout << "New Balance: " << this->get_balance();
}

void SavingsAccount::Deposit_Money()
{
	double Deposit = 0;
	cout << "Please Enter The Amount to Deposit : ";
	cin >> Deposit;
	while (Deposit < 100)
	{
		cout << "Sorry. This is less than what you can Deposit.\n"
			<< "Please Enter The Amount to Deposit";
		cin >> Deposit;
	}
	Deposit = this->get_balance() + Deposit;
	this->set_balance(Deposit);
	cout << "thank you" << endl;
	cout << "Account ID: " << this->get_ID();
	cout << "New Balance: " << this->get_balance();
}
