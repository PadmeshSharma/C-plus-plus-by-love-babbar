#include<iostream>
using namespace std;

int factorial(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}

int nCr(int n,int r )
{
	int num=factorial(n);
	int denom=factorial(r)*factorial(n-r);
	int ans=num/denom;
	return ans;
}

int main()
{
	int n,r,ans;
	cout<<"Enter n and r for nCr calculation";
	cin>>n>>r;
	ans=nCr(n,r);
	cout<<"Answer is: "<<ans;	
}
