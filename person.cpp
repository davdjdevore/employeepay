// David Devore

#include "person.h"

Person::Person(){
  firstName = "";
  lastName = "";
  hoursWorked = 0;
  payRate = 0;
}
Person::Person(string fname, string lname, float hours, float rate){
  firstName = fname;
  lastName = lname;
  hoursWorked = hours;
  payRate = rate;
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
