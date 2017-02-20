#include "account.h"

using namespace std;

int main()
{
    printMeFirst("Mohammed Abbas","CS-116","1.1");
	Bank bank;
	bank.printBalances(0,0);
	cout << "the balance of checking: " << bank.get_checking() << endl;
	cout << "the balance of savings: " << bank.get_savings() << endl;
	cout << "adding $2000 to checking and $1000 to savings..." << endl;
	cout << endl;
	bank.printBalances(2000, 1000);
	cout << "the balance of checking: " << bank.get_checking() << endl;
	cout << "the balance of savings: " << bank.get_savings() << endl;
	cout << endl;
	bank.withDraw(1500, 0);
	cout << "withdrawing $1500 from checking..." << endl;
	cout << "the balance of checking: " << bank.get_checking() << endl; //this should be the last amount minus 100
	cout << "the balance of savings: " << bank.get_savings() << endl; //this should be the same!!
	bank.transfer("S", 200, 200);
	cout << "depositing $200 from saving to checking..." << endl;
	cout << "the balance of checking: " << bank.get_checking() << endl; //this should be the last amount minus 100
	cout << "the balance of savings: " << bank.get_savings() << endl; //this should be the same!!
	cout << endl;
	bank.withDraw(0, 900);
	cout << "withdrawing $0 from checkings..." << endl;
	cout << "withdrawing $900 from savings..." << endl;
	cout << "the balance of checking: " << bank.get_checking()  << endl; //this should be the last amount minus 100
	cout << "the balance of savings: " << bank.get_savings() << endl; //this should be the same!!
	cout << endl;
	bank.withDraw(400, 0);
	cout << "withdrawing $400 from checkings..." << endl;
	cout << "withdrawing $0 from savings..." << endl;
	cout << "the balance of checking: " << bank.get_checking() << endl; //this should be the last amount minus 100
	cout << "the balance of savings: " << bank.get_savings() << endl; //this should be the same!!
	cout << endl;

    return 0;
}

double Bank::get_checking()
{
	return checking;
}

double Bank::get_savings()
{
	return savings;
}
