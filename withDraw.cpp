#include "account.h"

using namespace std;

void Bank::withDraw(double updateC, double updateS)
{
	Bank bank;
	if (updateC > checking)
	{
		cout << "Insufficient funds" << endl;
		cout << "only $" << bank.get_checking() << " in checking; $5 penalty deducted" << endl;
		checking = checking - penalty;
		savings = savings - updateS;
	}
	if (updateS > savings)
	{
		cout << "Insufficient funds" << endl;
		cout << "only $" << bank.get_savings() << "in savings; $5 penalty deducted" << endl;
		checking = checking - updateC;
		savings = savings - penalty;
	}
	else
	{
		checking = checking - updateC;
		savings = savings - updateS;
	}

	
}
