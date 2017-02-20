#include <iostream>
#include <ctime>
#include <string>
using namespace std;

void printMeFirst(string, string, string);

class Bank
{
private:
	double checking; //now they are private and can be accessed with the public memeber function
	double savings;
public:
	void printBalances(double , double );
	void withDraw(double , double );
	void deposit(double , double , double , double );
	void transfer(string , double , double );
	double get_checking();
	double get_savings();
	const int penalty = 5;

};
void printBalances(double, double);
void withDraw(double, double);
void deposit(double, double, double, double);
void transfer(string, double, double);
