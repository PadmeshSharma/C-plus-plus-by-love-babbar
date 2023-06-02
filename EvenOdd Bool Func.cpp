#include<iostream>
using namespace std;

bool isEven(int a)
{
	if(a&1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	int num;
	cout<<"Enter num to check if even or odd";
	cin>>num;
	if(isEven(num))
	{
		cout<<"Even";
	}
	else
		cout<<"Odd";
}
