//Problem 2 (zeroboth.cpp): Implement a void function called zeroBoth
//that has two call-by-reference parameters, both of which are
//variables of type int, and sets the values of both variables to 0.

#include <iostream>
using namespace std;

// Function that sets both variables to 0 using call-by-reference
void zeroBoth(int &var1, int &var2){
  var1 = 0;
  var2 = 0;
  return;
}

// Demo:
int main(){
  int x = 1;
  int y = 5;
  cout << "X: " << x << endl;
  cout << "Y: " << y << endl;
  zeroBoth(x,y);
  cout << "X new: " << x << endl;
  cout << "Y new: " << y << endl;
  return 0;
}
