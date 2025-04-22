#include<iostream>
using namespace std;
int main()
{
	int num;
	bool isprime = 1;

	cout << "enter number to check: ";
	cin >> num;

	for(int i = 2; i < num; i++)
	{
		if(num % i == 0)
		{
			isprime = 0;
			break;
		}
	}


	if(isprime == 1)
		cout << "prime" << endl;
	else
		cout << "not prime" << endl;
}
