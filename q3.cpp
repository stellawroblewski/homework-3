#include <iostream>
using namespace std;

int pow(int a, int b)
{
	if (b != 0) {
		return (a*pow(a, b-1));
	} else {
		return 1;
	}
}

int main() {
	int base;
	cin >> base;
  int exponent;
	cin >> exponent;
	if ((base >= 1) & (exponent >= 1)) {
	  int result = pow(base, exponent);
    cout << result << endl;
  } else {
    cout << "Both inputs must be positive." << endl;
    return 0;
  }
return 0; 
}







