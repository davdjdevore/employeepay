

#include "person.cpp"

#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;

void readData(Person employees[], int size);
void writeData(Person employees[], int size);
int main(){

  int const size = 20;

  Person employees[size];

  readData(employees, size);

  writeData(employees, size);

return 0;

}

void readData(Person employees[], int size){

  cout << "Opening and processing file.." << endl;

  ifstream inFile;
  inFile.open("input.txt");
  string fName, lName;
  double hours, pay;
  int count = 0;

  inFile >> fName;

  while (!inFile.eof()){
    inFile >> lName;
    inFile >> hours;
    inFile >> pay;

    employees[count].setFirstName(fName);
    employees[count].setLastName(lName);
    employees[count].sethoursWorked(hours);
    employees[count].setPayRate(pay);
    count++;
    inFile >> fName;
  };

  inFile.close();
  cout << "File processed" << endl;

};

void writeData(Person employees[], int size){

  cout << "Generating output file.."<< endl;

  ofstream outFile;
  outFile.open("output.txt");

  outFile << fixed << setprecision(2);

  for (int i=0; i < size; i++){
    if(employees[i].fullName().length()> 1){
      outFile << employees[i].fullName();
      outFile << " ";
      outFile << employees[i].totalPay();
      outFile << "\n";
    };
  };

  outFile.close();
  cout << "File generated" << endl;
};
