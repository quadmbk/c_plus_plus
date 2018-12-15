#include <iostream>
#include <curses.h>
#include <iomanip>

using namespace std;
class account
{
	char name[100];
	int  account_number;
	char type[100];
	float balance;

	void copy(char *n)
	{
		char *a = name;
		while (*n != '\0')
		{
			*a = *n;
			a++;
			n++;
		}
	}

	public:
	void init(char *n, int num, char *t, float bal) 
	{
		copy(n);
		account_number = num;
		*type = *t;
		balance = bal;

	}

	int deposit(float amt)
	{
		cout <<"Old Value: "<<setw(10)<<balance;
		balance=balance+amt;
		cout <<"New Value: "<<setw(10)<<balance;
		return 0;
	}

	int withdraw(float amt)
	{
		balance = balance - amt;
		cout << "New Balance: " <<balance;
		return amt;
	}
	void display()
	{
		cout << "Name: "<<name<<"\n Balance : "<<balance;
	}
};


int main()
{
	account a;
	char name[100]="Shubhanshu";
	a.init(name, 105120, "savings", 85321.35);

	a.display();
	return 0;
}
