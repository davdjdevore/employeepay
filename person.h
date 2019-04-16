// David Devore

#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person{
  private:
    string firstName;
    string lastName;
    float hoursWorked;
    float payRate;

  public:
    Person();
    Person(string fname, string lname, float hours, float rate);
    void setFirstName(string fName);
    string getFirstName();
    void setLastName(string lName);
    string getLastName();
    void sethoursWorked(float hours);
    float getHoursWorked();
    void setPayRate(float pay);
    float getPayRate();
    float totalPay();
    string fullName();

};

#endif
