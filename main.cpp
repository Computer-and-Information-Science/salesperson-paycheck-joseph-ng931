#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
  ifstream inData;
  ofstream outData;

  string firstName, lastName;
  double baseSalary, commissionPercent, totalSales, expenses, grossPay, commission;

  outData << fixed << setprecision(2);
  //Employee 1

  inData.open("testcase1.txt");

  inData >> firstName >> lastName >> baseSalary >> commissionPercent >> totalSales >> expenses;

  commission = totalSales * (commissionPercent / 100);
  grossPay = baseSalary + commission + expenses;

  outData.open("output1.txt");

  outData << "Payroll data for " << firstName << " " << lastName << endl;
  outData << " " << endl;
  outData << "Base Salary: " << setw(10) << baseSalary << endl;
  outData << "Commission: " << setw(11) << commission << " (" << commissionPercent << "% of " << totalSales << ")" << endl;
  outData << "Expenses: " << setw(13) << expenses << endl;
  outData << "----------------------- " << endl;
  outData << "Total: " << setw(16) << grossPay << endl;

  inData.close();
  outData.close();

  //Employee 2
  
  inData.open("testcase2.txt");

  inData >> firstName >> lastName >> baseSalary >> commissionPercent >> totalSales >> expenses;

  commission = totalSales * (commissionPercent / 100);
  grossPay = baseSalary + commission + expenses;

  outData.open("output2.txt");

  outData << "Payroll data for " << firstName << " " << lastName << endl;
  outData << " " << endl;
  outData << "Base Salary: " << setw(10) << baseSalary << endl;
  outData << "Commission: " << setw(11) << commission << " (" << commissionPercent << "% of " << totalSales << ")" << endl;
  outData << "Expenses: " << setw(13) << expenses << endl;
  outData << "----------------------- " << endl;
  outData << "Total: " << setw(16) << grossPay << endl;

  inData.close();
  outData.close();

  //Employee 3
  
  inData.open("testcase3.txt");

  inData >> firstName >> lastName >> baseSalary >> commissionPercent >> totalSales >> expenses;

  commission = totalSales * (commissionPercent / 100);
  grossPay = baseSalary + commission + expenses;

  outData.open("output3.txt");

  outData << "Payroll data for " << firstName << " " << lastName << endl;
  outData << " " << endl;
  outData << "Base Salary: " << setw(10) << baseSalary << endl;
  outData << "Commission: " << setw(11) << commission << " (" << commissionPercent << "% of " << totalSales << ")" << endl;
  outData << "Expenses: " << setw(13) << expenses << endl;
  outData << "----------------------- " << endl;
  outData << "Total: " << setw(16) << grossPay << endl;

  inData.close();
  outData.close();
  return 0;
}
