#include <iostream>

using namespace std;
class Account
{
private:
	string id;
	string name;
	int balance = 0;

public:
	Account(string n, string i){
		name = n;
		id = i;
	}
	Account(string n, string i, int b){
		name = n;
		id = i;
		balance = b;
	}
	void setBalance(int b){
		balance = b;
	}
	string getName(){
		return name;
	}
	string getId(){
		return id;
	}
	int getBalance(){
		return balance;
	}
	int credit(int amount){
		balance += amount;
		return balance;
	}
	int debit(int amount){
		if (amount <= balance){
			balance -= amount;
		}
		else{
			cout << "amount exceeded";
		}
		return balance;
	}

	int transfereTo(Account &a, int amount){
		if (amount <= balance){
			a.credit(amount);
			balance -= amount;
		}
		else{
			cout << "Amount exceeded";
		}
		return balance;
	}
};
int main()
{
    Account a("WALEED", "112d5", 2000);
	Account b("OMEGA", "122d5", 3000);
	cout << "Hi " << a.getName() << " Your balance is : " << a.getBalance() << endl;

	cout << "\nEnter amount you will add : \n";
	int x;
	cin >> x;
	cout << "\nNow your balance is : " << a.credit(x) << endl;

	cout << "\nEnter amount you will withdraw : \n";
	int y;
	cin >> y;
	cout << "\nNow your balance is : " << a.debit(y) << endl;

	cout << "\nMohamed Balance : " << b.getBalance() << endl;

	cout << "\nEnter amount you will transfer : \n";
	int z;
	cin >> z;
	cout << "\nNow your balance is : " << a.transfereTo(b, z) << endl;

	cout << "\nMohamed Balance : " << b.getBalance() << endl;
    return 0;
}
