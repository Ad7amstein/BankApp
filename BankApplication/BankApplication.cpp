#include "BankApplication.h"

BankApplication::BankApplication()
{
	display();
	load();
}

void BankApplication::display()
{
	cout << "Welcome to FCAI Banking Application\n"
		<< "1. Create a New Account\n"
		<< "2. List Clients and Accounts\n"
		<< "3. Withdraw Money\n"
		<< "4. Deposit Money\n";
	cout << "Please Enter Choice =========> ";
	cin >> choice;
}

void BankApplication::load()
{
	ifstream file;
	file.open("Data.txt", ios::in);
	string line;
	int nLines(0);
	int nClients(0);
	while (getline(file, line)) {
		string name, id, phone, balance, address, type;
		nLines++;
		if (nLines > 2) {
			nClients++;
			Clients.resize(nClients);
			int nSpaces(0);
			int i(0);
			name = line.substr(0, 40);
			removeSpaces(name);
			cout << name << endl;
			id = line.substr(40, 9);
			removeSpaces(id);
			cout << id << endl;
			address = line.substr(52, 30);
			removeSpaces(address);
			cout << address << endl;
			phone = line.substr(82, 12);
			removeSpaces(phone);
			cout << phone << endl;
			balance = line.substr(97, 13);
			removeSpaces(balance);
			cout << balance << endl;
			double b = stod(balance);
			type = line.substr(115);
			cout << type << endl;
			//Clients[nClients - 1].set_name(name);
			//Clients[nClients - 1].set_phone(phone);
			//Clients[nClients - 1].set_address(address);
			//Clients[nClients - 1].set_bas_ID(id);
			//Clients[nClients - 1].set_bas_balance(b);
			//Clients[nClients - 1].set_Type(type);
		}
	}
}

void BankApplication::removeSpaces(string& s)
{
	int i = s.length() - 1;
	while (isspace(s[i])) {
		i--;
	}
	s = s.substr(0, i + 1);
}