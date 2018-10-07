//this function calculates the log of an input num at an input base and returns the value, for non integer results, returns the floor
#include <iostream>
#include <math.h>
using namespace std;

int log(int a, int b)	//takes a, num, and b, base
{
  int result = 0;	//initializes result to 0
  for (int i = 1; a >= pow(b,i) ; i++)	//loops that goes computes power function on base and i until it reaches floor value, iterates i each loop
  {
    result += 1;	//iterates result
   }
 return result;   
}

int main() {
	int num;
	cin >> num;	//read in num 
  int base;
	cin >> base;	//read in base
	if ((num >= 1) & (base >= 1)) {	//if both inputs > 0, call log and store result in result
	  int result = log(num, base);
    cout << result << endl;	//return result
  } else {
    cout << "Both inputs must be positive." << endl;	//if either inputs negative, returns string
    return 0;
  }
return 0; 
}
