#include<iostream>
using namespace std;
int main()
{
	int count = 0, n;
	cout << "enter a number: ";
	cin >> n;
	
	while(n >= 1)
	{
		if(n % 2 == 1)
			count++;

		n = n / 2;
	}

	cout <<  count << endl;
}

