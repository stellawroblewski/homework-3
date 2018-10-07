#include <iostream>
#include <math.h>
using namespace std;

int log(int a, int b)
{
  int result = 0;
  for (int i = 1; a >= pow(b,i) ; i++)
  {
    result += 1;
   }
 return result;   
}

int main() {
	int num;
	cin >> num;
  int base;
	cin >> base;
	if ((num >= 1) & (base >= 1)) {
	  int result = log(num, base);
    cout << result << endl;
  } else {
    cout << "Both inputs must be positive." << endl;
    return 0;
  }
return 0; 
}
