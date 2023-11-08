/* Bank account class created by David Melanson with the idea based on idea posed in 
 * Amer Qouneh's CPE 422 HW7 Problem 3
 *
 *
 *
 *
 *
 *
 */

#include<string>
#include<iostream>

using namespace std;

class BankAccount {
	private:
		string customerName;
		float balance;

		void setName(string n);
		void setBalance(float bal);

	public:
		BankAccount(string n, float bal);
		string getName();
		float getBalance();
		void deposit(float dep);
		void withdraw(float draw);
		~BankAccount();
};




