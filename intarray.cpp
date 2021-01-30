//Problem 1 (intarray.cpp): Write a program that will read up to
//ten nonnegative integers into an array called numberArray
//and then write/print the integers back to the screen (console
//output). For this exercise you need not use any functions.

#include <iostream>
#include <array>
using namespace std;

int main(){
  int inputNum;
  array<int,10> numberArray;
  int size = 0;

  // continues reading in inputs until the array is filled with nonnegative ints
  while(size < 10){
    cout << "Enter a number : " << endl;
    cin >> inputNum;
    //checks if the input is positive
    if(inputNum >= 0){
      numberArray[size++] = inputNum;
    }
  }

  // prints each integer in the array
  cout << "Printing nums" << endl;
  for(int i = 0; i < 10; ++i){
    cout << numberArray[i] << " ";
  }
  cout << endl;
  return 0;
}
