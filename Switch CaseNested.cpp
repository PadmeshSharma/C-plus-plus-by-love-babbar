#include<iostream>
using namespace std;

int main()
{
	int num=1;
	char ch='1';
	switch(ch)
	{
		case 1:
			cout<<"Integer one";
			break;
		case '1':switch(num)
				{
					case 1: cout<<"Value of num is "<<num;
							break; 
				}
			break;
		default:
			cout<<"default case";
			break;
	}
	return 0;
}
