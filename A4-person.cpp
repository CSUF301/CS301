// Danny Cristea
// Section 1
#include <iostream>
#include <string>
#include "person.h"

using namespace std;

Person::Person()   // initializer 
{
	lastName = "";
	firstName = "";
	payRate = 0.00;
	hoursWorked = 0.00;
}  

Person::Person(string fName, string lName, float rate, float hours)
{
	lastName = lName;
	firstName = fName;
	payRate = rate;
	hoursWorked = hours;
}

void Person::setLastName(string lastN)
{
	lastName = lastN;
}

string Person::getLastName()
{
	return lastName;
}

void Person::setFirstName(string firstN)
{
	firstName = firstN;
}

string Person::getFirstName() 
{
	return firstName;
}

void Person::setPayRate(float payR)
{
	payRate = payR;
}

float Person::getPayRate()
{
	return payRate;
}

void Person::setHoursWorked(float hoursW)
{
	hoursWorked = hoursW;
}

float Person::getHoursWorked()   // Person:: calls the public methods(functions) in person class.
{	
	return hoursWorked;
}


float Person::totalPay()
{
	return  getHoursWorked() * getPayRate();
}
	
string Person::fullName()
{
	return firstName + " " + lastName;
}