#include<iostream>
using namespace std;

int main()
{
	int n,i,a=0,c,b=1;
	cout<<"Enter n for fibonacci series:";
	cin>>n;
	cout<<a<<"\t"<<b<<"\t";
	for(i=1;i<=n-2;i++)
	{
		c=a+b;
		cout<<c<<"\t";
		a=b;
		b=c;
	}
}
