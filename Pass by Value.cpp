#include<iostream>
using namespace std;

void dummy(int n)
{
	n++;
	cout<<"n is "<<n<<endl;
}
int main()

{
	int n;
	cout<<"Enter n";
	cin>>n;
	dummy(n);//value of dummy n isn't stored in n thus both n are diff with diff scope
	cout<<"Number n is "<<n<<endl;
	return 0;
}
