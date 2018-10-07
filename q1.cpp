//this function reads 3 integer values and returns the greatest value
#include <iostream>
using namespace std;

int main()	//this function reads 3 integer values and returns the greatest value
{
	int firstInput;		
	cin >> firstInput;	//reads in first int
	int secondInput;
	cin >> secondInput;	//reads in second int
	int thirdInput;
	cin >> thirdInput;	//reads in third int
	int greatest = 0;
	if (firstInput >= secondInput) { //compares first and second int
		greatest = firstInput;	// if first int larger, changes greatest to first int value
	} else {
		greatest = secondInput; // if second int larger, changest greatest to second int value
	}
	if (thirdInput >= greatest) { 
		greatest = thirdInput;	// if third int larger than current value, changes greatest to third int value
	} else {
		; 
	}
	cout << "Greatest value is: " << greatest << endl;	//returns greatest value
	
	return 0;
}
