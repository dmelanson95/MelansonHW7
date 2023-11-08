/* Program created by David Melanson to complete problem set posed in 
 * Amer Qouneh's CPE 422 Homework 7, Problem 3.
 * Cout statements from this program and bankAccount class functions 
 * detail what happens at each step.
 *
 */

#include "bankAccount.h"

int main() {
	cout << "Running bank account app" << endl;
	BankAccount jackAccount(string("Jack Smith"), float(50.0));
	BankAccount jillAccount("Jill Brian", 100.0);
	BankAccount bankArray[3] = {
		BankAccount("Ralph Kramden", 10.0),
		BankAccount("Alice Kramden", 20.0),
		BankAccount("Ed Norton", 30.0)
	};

	//Part d
	for(int i = 0; i < 3; i++) {
		bankArray[i].deposit(30.0);
	}

	//Part e
	for(int i = 0; i < 3; i++) {
		bankArray[i].withdraw(20.0);
	}

	//Part f
	cout <<	jackAccount.getName() << " has balance of " << jackAccount.getBalance() << endl;
	cout <<	jillAccount.getName() << " has balance of " << jillAccount.getBalance() << endl;
	for(int i = 0; i < 3; i++) {
		cout << bankArray[i].getName() << "has balance of " << bankArray[i].getBalance() << endl;
	}

	cout << "Finished running bank account app" << endl;
	return 0;
}
