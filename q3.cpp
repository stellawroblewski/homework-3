//this function takes two inputs, a base and exponent, and computers the power function result recursively
#include <iostream>
using namespace std;

int pow(int a, int b)	//takes two inputs, a base and exponent, and computers the power function result recursively
{
	if (b != 0) {	//while b > 0
		return (a*pow(a, b-1));
	} else {
		return 1;
	}
}

int main() {
	int base;	
	cin >> base;	//read in base value
  int exponent;
	cin >> exponent;	//read in exponent value
	if ((base >= 1) & (exponent >= 1)) {	//if both > 0, call pow and save result in result
	  int result = pow(base, exponent);
    cout << result << endl;	//return result
  } else {
    cout << "Both inputs must be positive." << endl; //return string if either input is negative
    return 0;
  }
return 0; 
}







