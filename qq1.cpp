#include <iostream>
using namespace std;

int main()
{
	int firstInput;
	cin >> firstInput;
	int secondInput;
	cin >> secondInput;
	int thirdInput;
	cin >> thirdInput;
	int greatest = 0;
	if (firstInput >= secondInput) {
		greatest = firstInput;
	} else {
		greatest = secondInput;
	}
	if (thirdInput >= greatest) {
		greatest = thirdInput;
	} else {
		; 
	}
	cout << "Greatest value is: " << greatest << endl;
	
	return 0;
}
