/* Implements class started in BankAccount.h
 * by David Melanson with credits for idea to Amer Qouneh
 *
 */


#include "bankAccount.h"

BankAccount::BankAccount(string n, float bal) {
	this->customerName = n;
	this->balance = bal;
	cout << "Bank account for " << this->customerName << " created with balance of " << this->balance << "." << endl;
}


void BankAccount::setName(string n) {
	this->customerName = n;
}

void BankAccount::setBalance(float bal) {
	this->balance = bal;
}

string BankAccount::getName() {
	return this->customerName;
}

float BankAccount::getBalance() {
	return this->balance;
}

void BankAccount::deposit(float dep) {
	this->balance = this->balance + dep;
	cout << dep << " deposited to " << this->customerName << "'s account." << endl;
}

void BankAccount::withdraw(float draw) {
	this->balance = this->balance - draw;
	cout << draw << " withdrawn from " << this->customerName << "'s account." << endl;
}

BankAccount::~BankAccount() {
	cout << this->customerName << "'s account has been closed. " << endl;
}
