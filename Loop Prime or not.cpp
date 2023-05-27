#include<iostream>
using namespace std;

int main()
{
	int n,i=2;
	cout<<"Enter n";
	cin>>n;
	while(i<n)
	{
		if (n%i==0)
		{
			{
				cout<<"Not Prime";
				break;
			}
		}
		else 
		{
			cout<<"Prime";
			break;
		}
		i++;
	}
}
