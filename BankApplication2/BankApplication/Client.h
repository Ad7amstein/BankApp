#pragma once
#include <string> 
#include "BasicAccount.h"
#include "SavingsAccount.h"
using namespace std;
class Client
{
	string name;
	string address;
	string phone;
	string Account_Type;
	BasicAccount* accountptr;
public:
	Client(string n = "", string a = "", string ph = "", string t = "Basic");
	string get_name();
	string get_address();
	string get_phone();
	void set_name(string n);
	void set_address(string a);
	void set_phone(string ph);
	void set_bas_ID(string id);
	void set_bas_balance(double b);
	string get_bas_ID();
	double get_bas_balance();
	BasicAccount& Account_Type_fun();
	void set_Type(string t);
};