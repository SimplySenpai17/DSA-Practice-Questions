#include <iostream>
using namespace std;
int main()
{
	int n;
	int sum = 0, product = 1;
	
	cout << "enter number: ";
	cin >> n;

	while(n > 0)
	{
		int i = n%10;
		n = n/10;

		sum += i;
		product *= i;
	}
	
	int result = product - sum;
	cout << result;
}

			
