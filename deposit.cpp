#include "account.h"

using namespace std;

void Bank::deposit(double new_checking, double new_savings, double updateC, double updateS)
{
	checking = new_checking + updateC;
	savings = new_savings + updateS;
}
