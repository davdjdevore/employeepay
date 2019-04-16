// David Devore

#include "person.cpp"

#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;

void readData(vector <Person> &employees);
void writeData(vector <Person> employees);

int main(){


  vector <Person> employees;

  readData(employees);

  writeData(employees);

return 0;

}

void readData(vector <Person> &employees){

  cout << "Opening and processing file.." << endl;

  ifstream inFile;
  inFile.open("input.txt");
  string fName, lName;
  float hours, pay;
  int count = 0;

  inFile >> fName;

  while (!inFile.eof()){
    inFile >> lName;
    inFile >> hours;
    inFile >> pay;

   employees.emplace_back(fName, lName, hours, pay);

    inFile >> fName;
  };


  inFile.close();
  cout << "File processed" << endl;

};

void writeData(vector <Person> employees){

  cout << "Generating output file.."<< endl;

  ofstream outFile;
  outFile.open("output.txt");

  outFile << fixed << setprecision(2);

  for (int i=0; i < employees.size(); i++){
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
