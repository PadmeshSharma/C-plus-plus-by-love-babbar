#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cout<<"Enter n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"Hii"<<endl;
		cout<<"Hey"<<endl;
		continue;//Code below this statement becomes unreachable
		cout<<"Byee";
	}
}
