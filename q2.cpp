//this function takes one int followed by ten more ints and returns how many of the ten ints are multiples of the first int
#include <iostream>
using namespace std;

bool isMultiple(int a, int b) //helper function to compare two ints and return true if a is a muliple of b
{
	if (a % b == 0) {
		return true;
	} else {
		return false;
	}
}

int main() { //takes one int followed by ten more ints and returns how many of the ten ints are multiples of the first int
	int numberOfMultiples = 0;
	int num;
	cin >> num;	//reads in value
	for (int i = 1; i <= 10; i++) //creates loop to read in ten ints and call isMultiple to compare each to the first int and determine if they are multiples of first int
	{
		int input;
		cin >> input;
		bool multiple = isMultiple(input, num);	//call isMultiple with input and current num inpit
        if (multiple == true)	// iterate number of multiples
			numberOfMultiples += 1;
	}
	cout << "Number of multiples: " << numberOfMultiples << endl; 	//return number of multiples
	return 0; 
}




