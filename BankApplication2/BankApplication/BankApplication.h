#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "BasicAccount.h"
#include "SavingsAccount.h"
#include "Client.h"
using namespace std;

class BankApplication
{
private:
	int choice;
	vector<Client>Clients;
public:
	BankApplication();
	void display();
	void load();
	void list();
	void removeSpaces(string& s);
};

