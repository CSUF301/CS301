//begin person.h
#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;

class Person
{
private:
	string lastName;
	string firstName;
	float  payRate;
	float  hoursWorked;
public:     
				      // inline is used due to compiler/linker compatibility i had. 
	inline Person();  // initializer 
	
	void inline setLastName(string lastName);
	
	string inline getLastName();      
	
	void inline setFirstName(string _first);
	
	string inline getFirstName();    
	
	void inline setPayRate(float _rate);
	
	float inline getPayRate();       
	
	void inline setHoursWorked(float _hours);
	
	float inline getHoursWorked();   
	
	float inline totalPay();
	
	string inline fullName();
};
#endif  // end person.h


