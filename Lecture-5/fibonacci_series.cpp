#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 1, num, temp;
	
	cout << "enter value of num: ";
	cin >> num;
	
	cout << a << " " << b << " ";

	for(int i = 0; i <= num; i++)
	{
		temp = a + b;
		cout << temp << " ";
		a = b;
		b = temp;
	}
}

