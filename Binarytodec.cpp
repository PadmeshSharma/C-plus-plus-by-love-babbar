#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n,ans=0,i=0;
	cout<<"Enter n to convert to decimal no";
	cin>>n;
	while(n !=0)
	{
		int dig=(n%10);
		if (dig==1)
		{
			ans= ans+ pow(2,i);
		}
		n=n/10;
		i++;
	}
	cout<<"Decimal form is "<<ans<<endl;
}
