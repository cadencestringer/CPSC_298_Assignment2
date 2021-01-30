//Problem 3(salestax.cpp):Implement a function called addTax.
//The function addTax has two formal parameters: taxRate(float),
//which is the amount of sales tax expressed as a percent; and
//cost(float), which is the cost of an item before tax. The
//function returnsthe value(float)of cost so that it includes sales tax.

#include <iostream>
using namespace std;

// Function that calculates amount of tax and adds it to cost
float addTax(float taxRate, float cost){
  float taxToAdd = cost * taxRate;
  float newCost = cost + taxToAdd;
  return newCost;
}

// Demo:
int main(){
  float tax;
  cout << "What is the tax rate? ";
  cin >> tax;

  float c;
  cout << "What is the pre-tax cost? ";
  cin >> c;

  cout << "Pre tax cost: " << c << endl;
  cout << "Tax rate: " << tax << endl;

  float finalCost = addTax(tax,c);
  cout << "Post tax cost: " << finalCost << endl;
  return 0;
}
