#include "account.h"

using namespace std;

void Bank::transfer(string account, double updateC, double updateS)
{
	if (account == "C")
	{
		checking = checking - updateC;
		savings = savings + updateS;
	}
	if (account == "S")
	{
		checking = checking + updateC;
		savings = savings - updateS;
	}
}
