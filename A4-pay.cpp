// Danny Cristea
// Section 1
#include "person.cpp"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>  // assignment 4

using namespace std;


void readData(string inFile, vector<Person> &vect);
void writeData(vector<Person> &vect);

int main()
{
	vector<Person> vect;    // assignment 4 vector
	string inFile = "input.txt";


	readData(inFile, vect);
	writeData(vect);
	
	return 0;
}

void readData(string inFile, vector<Person> &vect)
{
		ifstream inData;
		string fName, lName;
		float rate, hours;
	
		inData.open(inFile);   // opens input.txt

		if (inData.fail())	 	
		{
			cout << "Error" << endl;
		}
		while (inData >> fName)
		{
				inData >> lName;
				inData >> rate;
				inData >> hours;
				vect.emplace_back(fName, lName, rate, hours);
		}
		inData.close();	
}

void writeData(vector<Person> &vect)
{
	ofstream outData;
	string fullName = "";
	float totalPay = 0.00;
	outData.open("output.txt");

	for (int i = 0; i < vect.size(); i++)
	{
		fullName = vect[i].fullName();
		totalPay = vect[i].totalPay();
		outData << fullName << " " << fixed << setprecision(2) << totalPay << endl;
	}
	outData.close();
}