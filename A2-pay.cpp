#include "person.cpp"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int readData(Person arr[], int size);   // fucntion declaration
void writeData(Person arr[], int size);  // function declaration


int main()
{
	int size = 20;
	Person arr[size];     // arr of obejct type Person

	size = readData(arr, size);  // calling the readData function.
	writeData(arr, size); // calling the writeData function.
	
	
	return 0;
}

int readData(Person arr[], int size)
	{
		string fname, lname, name, dataFile;
		float pay, hours;
		int count = 0;
		
		ifstream inData;			// using the ifstream op
		inData.open("input.txt");   // opens input.txt

		inData >> fname;
		while (!inData.eof())	 	// while not end of file (eof)
		{
				inData >> lname;
				inData >> pay;
				inData >> hours;
				name = fname + " " + lname;
		
				arr[count].setFirstName(fname);
				arr[count].setLastName(lname);
				arr[count].setPayRate(pay);
				arr[count].setHoursWorked(hours);
					
				//cout << name << " " << pay * hours << " " << endl;
				inData >> fname;
				count++;		
		}
		inData.close();		
		return count;
	}
	

void writeData(Person arr[], int size)  
{
	ofstream outData;
	outData.open("output.txt");

	for (int i = 0; i < size; i++)
	{
		outData << arr[i].fullName() << " " << fixed << setprecision(2) << arr[i].totalPay() << endl;
	}
	outData.close();
}