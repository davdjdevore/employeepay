// David Devore

#include "person.h"

Person::Person(){
  string firstName;
  string lastName;
  float hoursWorked;
  float payRate;
}

void Person::setFirstName(string fName){ firstName = fName;}
string Person::getFirstName(){ return firstName;}

void Person::setLastName(string lName){ lastName = lName;}
string Person::getLastName(){ return lastName;}

void Person::sethoursWorked(float hours){ hoursWorked = hours; }
float Person::getHoursWorked(){ return hoursWorked; }

void Person::setPayRate(float pay){ payRate = pay; }
float Person::getPayRate(){ return payRate; }

float Person::totalPay(){ return payRate * hoursWorked; }

string Person::fullName(){ return firstName + " " + lastName; };
