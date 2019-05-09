#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <iomanip>
#include <math.h>

using namespace std;


ifstream inData;
inData.open("accounts.txt");


int main()
{
	
	
int choice;
bool programOn = true;


while (programOn != false)
{
cout << "*******************************\n";
cout << " 1 - Display All Records\n";
cout << " 2 - Find Richest\n";
cout << " 3 - Deposit\n";
cout << " 4 - Exit.\n";
cout << " Enter your choice and press return: ";

cin >> choice;


switch (choice)
{
case 1:
cout << "Display All Records\n";
// rest of code here
while(inData)
{
	string first = "";
	string last = "";
	float balance = 0.00;
	
	inData >> first;
	inData >> last;
	inData >> balance;
	
	cout << first << " " << last << " " << balance << endl;
}
break;
case 2:
cout << "Find Richest\n";
// rest of code here
break;
case 3:
cout << "Deposit\n";
// rest of code here
break;
case 4:
cout << "End of Program. Have a nice day!\n";
programOn = false;
break;
default:
cout << "Not a Valid Choice. \n";
cout << "Choose again.\n";
cin >> choice;
break;
}

}
return 0;
}