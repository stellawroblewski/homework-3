#include <iostream>
using namespace std;

bool isMultiple(int a, int b)
{
	if (a % b == 0) {
		return true;
	} else {
		return false;
	}
}

int main() {
	int numberOfMultiples = 0;
	int num;
	cin >> num;
	for (int i = 1; i <= 10; i++) 
	{
		int input;
		cin >> input;
		bool multiple = isMultiple(input, num);
        if (multiple == true) 
			numberOfMultiples += 1;
	}
	cout << "Number of multiples: " << numberOfMultiples << endl;
	return 0; 
}




