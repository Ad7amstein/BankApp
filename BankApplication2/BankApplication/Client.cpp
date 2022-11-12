#include "Client.h"
#include"SavingsAccount.h"
#include "BasicAccount.h"
using namespace std;
#include <iostream>
Client::Client(string n, string a, string ph, string t)
{
    name = n; address = a; phone = ph; Account_Type = t;
}

string Client::get_name()
{
    return name;
}

string  Client::get_address()
{
    return address;
}

string  Client::get_phone()
{
    return phone;
}

void Client::set_name(string n)
{
    name = n;
}

void Client::set_address(string a)
{
    address = a;
}

void Client::set_phone(string ph)
{
    phone = ph;
}

void Client::set_bas_ID(string id)
{
    accountptr->set_ID(id);

}

void Client::set_bas_balance(double b)
{
    accountptr->set_balance(b);
}

string Client::get_bas_ID()
{
    return accountptr->get_ID();
}

double Client::get_bas_balance()
{
    return accountptr->get_balance();
}

BasicAccount& Client::Account_Type_fun()
{
    if (Account_Type == "Basic")
    {
        accountptr = new BasicAccount();
        BasicAccount op;
        accountptr = &op;
    }
    else if (Account_Type == "Saving")
    {
        accountptr = new BasicAccount();
        SavingsAccount op;
        accountptr = &op;


    }
    return *accountptr;
}

void Client::set_Type(string t)
{
    Account_Type = t;
}