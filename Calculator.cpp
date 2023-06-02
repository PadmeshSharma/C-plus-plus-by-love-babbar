#include<iostream>
using namespace std;

int main()
{
	int a,b;
	char op;
	cout<<"Enter a and b"<<endl;
	cin>>a>>b;
	cout<<"Enter num for following operations:"<<endl;
	cout<<"Enter + for addition of a and b"<<endl;
	cout<<"Enter - for subtraction of a and b"<<endl;
	cout<<"Enter * for multiplication of a and b"<<endl;
	cout<<"Enter / for division of a and b"<<endl;
	cin>>op;
	switch(op)
	{
		case '+':
			cout<<"Addition of a and b is "<<a+b;
			break;
		case '-':
			cout<<"Subtraction of a and b is "<<a-b;
			break;
		case '*':
			cout<<"Multiplication of a and b is "<<a*b;
			break;
		case '/':
			cout<<"Division of a and b is "<<a/b;
			break;
		default:
			cout<<"default case";
			break;
	}
	return 0;
}
