// Problem 4(conversion.cpp): Write a program that will read in a
// length in feet and inches and output the equivalent length in meters
// and centimeters. Use at least threefunctions: one for user input,
// one or more for calculating, and one for output(console).
// Include a loop that lets the user repeat this computation for new
// input values until the user says he or she wants to end the
// program(user has to type exit).There are 0.3048 meters in a foot,
// 100 centimeters in a meter, and 12 inches in a foot.

#include <iostream>
using namespace std;

// Function that calculates meters from feet
float calcMeters(float feet){
  float meters = 0.3048*feet;
  return meters;
}

// Function that calculates centimeters from inches
float calcCentimeteres(float inches){
	float centimeters = ((inches/12.0)*0.3048)*100;
	return centimeters;
}

// Function to output results
void outputResults(float meters, float centimeters){
	cout << "Your object is " << meters << " meters, and ";
	cout << centimeters << " centimeters. " << endl;
}

// Function that converts a string to a float using stof
float convertToFloat(string toConvert){
	float converted = stof(toConvert);
	return converted;
}

// Function to get and return feet input
string getFeetInput(){
	string feet;
	cout << "Enter feet to convert it to meters: ";
	cin >> feet;
	return feet;
}

// Function to get and return inches input
string getInchesInput(){
	string inches;
	cout << "Enter inches to convert it to centimeters: ";
	cin >> inches;
	return inches;
}

// Implementation
int main(){
  float feet;
  float inches;
	float meters;
	float centimeters;
	cout << "Welcome to the length converter." << endl;
	cout << "Exit at any time by typing 'exit' into either input." << endl;
  // initial setup:
	string feetInput = "";
	string inchesInput = "";
  feetInput = getFeetInput();
  inchesInput = getInchesInput();

  // continues to prompt the user for input until they exit
	while(feetInput!="exit"&&inchesInput!="exit"){
    // extra check to ensure that the user hasn't exited
    if(feetInput!="exit"&&inchesInput!="exit"){
      // convert inputs from string to float
  		feet = convertToFloat(feetInput);
  		inches = convertToFloat(inchesInput);
      // calculate centimeters/meters
  		meters = calcMeters(feet);
  		centimeters = calcCentimeteres(inches);
      // print results and ask for new input
  		outputResults(meters,centimeters);
      feetInput = getFeetInput();
      inchesInput = getInchesInput();
    }
	}
  return 0;
}
