#include<iostream>
using namespace std;

int main()
{
	int n,i,flag=0;
	cout<<"Enter n To check if prime:";
	cin>>n;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			flag=0;
			break;
	}
	if(flag==0)
		cout<<"Not prime";
	else
		cout<<"Prime";
}
