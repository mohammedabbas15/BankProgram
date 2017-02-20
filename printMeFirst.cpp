#include "account.h"
using namespace std;

void printMeFirst(string name, string courseInfo, string version)
{
    cout << "Program written by: " << name << endl;
    cout << "Course info: " << courseInfo << endl;
    cout << "version number: " << version << endl;
    
    time_t now = time(0);
    char* dt = ctime(&now);
    
    cout << "Date: " << dt << endl;
}
