#include<iostream>
using namespace std;

int main()
{
	char ch='1';
	switch(ch)
	{
		case 1:
			cout<<"Integer one";
			break;
		case '1':
			cout<<"Character one";
			break;
		default:
			cout<<"default case";
			break;
	}
	return 0;
}
